cat ./t_tanh.hpp | sed -e 's/tanh/sqrt/g' > t_sqrt.hpp
cat ./t_tanh.hpp | sed -e 's/tanh/sin/g' > t_sin.hpp
cat ./t_tanh.hpp | sed -e 's/tanh/sinh/g' > t_sinh.hpp
cat ./t_tanh.hpp | sed -e 's/tanh/asin/g' > t_asin.hpp
cat ./t_tanh.hpp | sed -e 's/tanh/asinh/g' > t_asinh.hpp
cat ./t_tanh.hpp | sed -e 's/tanh/tan/g' > t_tan.hpp
cat ./t_tanh.hpp | sed -e 's/tanh/atan/g' > t_atan.hpp
cat ./t_tanh.hpp | sed -e 's/tanh/atanh/g' > t_atanh.hpp
cat ./t_tanh.hpp | sed -e 's/tanh/ceil/g' > t_ceil.hpp
cat ./t_tanh.hpp | sed -e 's/tanh/floor/g' > t_floor.hpp
#cat ./t_tanh.hpp | sed -e 's/tanh/sign/g' > t_sign.hpp
cat ./t_tanh.hpp | sed -e 's/tanh/exp/g' > t_exp.hpp
cat ./t_max.hpp  | sed -e 's/max/min/g' > t_min.hpp
cat ./tt_max.hpp | sed -e 's/max/min/g' > tt_min.hpp
cat ./st_max.hpp | sed -e 's/max/min/g' > st_min.hpp
