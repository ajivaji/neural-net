#ifndef BASICNEURALNET_NEURALNET_H
#define BASICNEURALNET_NEURALNET_H
#include "Node.h"


class NeuralNet {
private:
	std::vector<std::vector<Node>> Net;
	std::vector<double> _inputValues;
	std::vector<double> _outputValues;
	std::vector<double> _expectedOutputValues;
	int numBiasNodes = 1;
public:
	NeuralNet(const std::vector<int>& topology);
	void FeedInputs(const std::vector<double>& inputValues);
	void FeedForward();
	void BackPropagation(const std::vector<double>& targets);
	std::vector<double> GetResults();
};


#endif //BASICNEURALNET_NEURALNET_H