#include "../../include/monolish_blas.hpp"
#include "../monolish_internal.hpp"

namespace monolish {

    /////vector constructor//////
    template <typename T>
        vector<T>::vector(const size_t N){
            val.resize(N);
        }
    template vector<double>::vector(const size_t N);
    template vector<float>::vector(const size_t N);


    template <typename T>
        vector<T>::vector(const size_t N, const T value) { 
            val.resize(N, value);
        }
    template vector<double>::vector(const size_t N, const double value);
    template vector<float>::vector(const size_t N, const float value);


    template <typename T>
        vector<T>::vector(const std::vector<T> &vec) {
            val.resize(vec.size());
            std::copy(vec.begin(), vec.end(), val.begin());
        }
    template vector<double>::vector(const std::vector<double> &vec);
    template vector<float>::vector(const std::vector<float> &vec);


    template <typename T>
        vector<T>::vector(const T *start, const T *end){
            size_t size = (end - start);
            val.resize(size);
            std::copy(start, end, val.begin());
        }
    template vector<double>::vector(const double *start, const double *end);
    template vector<float>::vector(const float *start, const float *end);

    template <typename T>
        vector<T>::vector(const size_t N, const T min, const T max) {
            val.resize(N);
            std::random_device random;
            std::mt19937 mt(random());
            std::uniform_real_distribution<> rand(min, max);

#pragma omp parallel for
            for (size_t i = 0; i < val.size(); i++) {
                val[i] = rand(mt);
            }
        }
    template vector<double>::vector(const size_t N, const double min, const double max);
    template vector<float>::vector(const size_t N, const float min, const float max);

    //vector utils//////////////////////
    
    template <typename T>
        void vector<T>::print_all() const {
            for (const auto v : val) {
                std::cout << v << std::endl;
            }
        }
    template void vector<double>::print_all() const;
    template void vector<float>::print_all() const;

    template <typename T>
        void vector<T>::print_all(std::string filename) const{
            std::ofstream ofs(filename);
            if (!ofs) {
                throw std::runtime_error("error file cant open");
            }
            for (const auto v : val) {
                ofs << v << std::endl;
            }
        }
    template void vector<double>::print_all(std::string filename) const;
    template void vector<float>::print_all(std::string filename) const;

    /// vector operator ///
    
    template <typename T>
        bool vector<T>::operator==(const vector<T> &vec) {
            if (get_device_mem_stat()) {
                throw std::runtime_error("Error, GPU vector cant use operator==");
            }
            if (val.size() != vec.size())
                return false;
            for (size_t i = 0; i < vec.size(); i++) {
                if (val[i] != vec.val[i])
                    return false;
            }
            return true;
        }
    template bool vector<double>::operator==(const vector<double> &vec);
    template bool vector<float>::operator==(const vector<float> &vec);

    template <typename T>
        bool vector<T>::operator!=(const vector<T> &vec) {
            if (get_device_mem_stat()) {
                throw std::runtime_error("Error, GPU vector cant use operator!=");
            }
            if (val.size() != vec.size())
                return true;
            for (size_t i = 0; i < vec.size(); i++) {
                if (val[i] != vec.val[i])
                    return true;
            }
            return false;
        }
    template bool vector<double>::operator!=(const vector<double> &vec);
    template bool vector<float>::operator!=(const vector<float> &vec);

    template <typename T>
        T util::get_residual_l2(matrix::CRS<T> &A, vector<T> &x, vector<T> &b) {
            vector<T> tmp(x.size());
            tmp.send();

            blas::matvec(A, x, tmp); // tmp=Ax
            tmp = b - tmp;
            return blas::nrm2(tmp);
        }
    template double util::get_residual_l2(matrix::CRS<double> &A, vector<double> &x,
            vector<double> &b);
    template float util::get_residual_l2(matrix::CRS<float> &A, vector<float> &x,
            vector<float> &b);
} // namespace monolish
