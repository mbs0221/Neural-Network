#pragma once

#include "layer.h"

// �Ż���
namespace optimizer {

	using namespace layers;

	template<class T>
	class Optimizer {
	private:
		double learning_rate;
	public:
		Optimizer(double lr = 0.001) :learning_rate(lr) { ; }
		void optimize(layers::Layer<T> &loss) {
			
		}
	};
}