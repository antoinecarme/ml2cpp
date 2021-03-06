// ******************************************************** 

// This C++ code was automatically generated by ml2cpp (development version).
// Copyright 2020

// https://github.com/antoinecarme/ml2cpp
// Model : MLPRegressor
// Dataset : freidman2

// This CPP code can be compiled using any C++-17 compiler.
// g++ -Wall -Wno-unused-function -std=c++17 -g -o ml2cpp-demo_MLPRegressor_freidman2.exe ml2cpp-demo_MLPRegressor_freidman2.cpp

// Model deployment code

// ******************************************************** 

#include "../../Generic.i"

namespace  {

	namespace InputLayer {
	
		std::vector<std::string> get_input_names(){
			std::vector<std::string> lFeatures = { "Feature_0", "Feature_1", "Feature_2", "Feature_3" };
	
			return lFeatures;
		}
	
		std::vector<std::string> get_output_names(){
			std::vector<std::string> lOutputs = { "input_0", "input_1", "input_2", "input_3" };
	
			return lOutputs;
		}
	
		tTable compute_features(std::any Feature_0, std::any Feature_1, std::any Feature_2, std::any Feature_3) {
	
			tTable lTable;
	
			lTable["input_0"] = { Feature_0 };
			lTable["input_1"] = { Feature_1 };
			lTable["input_2"] = { Feature_2 };
			lTable["input_3"] = { Feature_3 };
	
			return lTable;
		}
	
		tTable compute_model_outputs_from_table( tTable const & iTable) {
			tTable lTable = compute_features(iTable.at("Feature_0")[0], iTable.at("Feature_1")[0], iTable.at("Feature_2")[0], iTable.at("Feature_3")[0]);
	
			return lTable;
		}
	
	} // eof namespace InputLayer
	

	namespace HiddenLayer_1 {
	
		std::vector<std::string> get_input_names(){
			std::vector<std::string> lFeatures = { "input_0", "input_1", "input_2", "input_3" };
	
			return lFeatures;
		}
	
		std::vector<std::string> get_output_names(){
			std::vector<std::string> lOutputs = { "output_1_0", "output_1_1", "output_1_2" };
	
			return lOutputs;
		}
	
		tTable compute_features(std::any input_0, std::any input_1, std::any input_2, std::any input_3) {
	
			tTable lTable;
	
			double output_1_0_BA = -0.13457886984697576 * input_0 + -0.5913149669568497 * input_1 + -0.732364037445411 * input_2 + -0.8190406646863946 * input_3 + 0.34759387273386655;
	
			double output_1_1_BA = 0.7061017830458569 * input_0 + 0.46925789423546166 * input_1 + 858.4594736526437 * input_2 + 7.148676063119525 * input_3 + -123.49688416956536;
	
			double output_1_2_BA = 0.8773225952830825 * input_0 + -0.6009031879923881 * input_1 + 0.49058281232687817 * input_2 + 0.13171441121852798 * input_3 + -0.5925122750607899;
	
			lTable["output_1_0"] = { relu(output_1_0_BA) };
			lTable["output_1_1"] = { relu(output_1_1_BA) };
			lTable["output_1_2"] = { relu(output_1_2_BA) };
	
			return lTable;
		}
	
		tTable compute_model_outputs_from_table( tTable const & iTable) {
			tTable lTable = compute_features(iTable.at("input_0")[0], iTable.at("input_1")[0], iTable.at("input_2")[0], iTable.at("input_3")[0]);
	
			return lTable;
		}
	
	} // eof namespace HiddenLayer_1
	

	namespace HiddenLayer_2 {
	
		std::vector<std::string> get_input_names(){
			std::vector<std::string> lFeatures = { "output_1_0", "output_1_1", "output_1_2" };
	
			return lFeatures;
		}
	
		std::vector<std::string> get_output_names(){
			std::vector<std::string> lOutputs = { "output_2_0", "output_2_1", "output_2_2", "output_2_3", "output_2_4" };
	
			return lOutputs;
		}
	
		tTable compute_features(std::any output_1_0, std::any output_1_1, std::any output_1_2) {
	
			tTable lTable;
	
			double output_2_0_BA = 0.6727944969181574 * output_1_0 + 1.5838987009715464 * output_1_1 + 0.730021757072342 * output_1_2 + -301.29336210885396;
	
			double output_2_1_BA = 0.6488373974060548 * output_1_0 + -0.06939514187077084 * output_1_1 + -0.6459334884147514 * output_1_2 + -0.5292904296119374;
	
			double output_2_2_BA = -0.3007207571401164 * output_1_0 + -0.8273479140070293 * output_1_1 + -0.3010472276675544 * output_1_2 + -0.010394282503777497;
	
			double output_2_3_BA = -0.3413325239824932 * output_1_0 + -0.5189014374231408 * output_1_1 + -0.12233013201917596 * output_1_2 + -0.7406283496068888;
	
			double output_2_4_BA = -0.38676955125260504 * output_1_0 + -0.02759233099798763 * output_1_1 + 0.7252794030920408 * output_1_2 + -0.14939322656497145;
	
			lTable["output_2_0"] = { relu(output_2_0_BA) };
			lTable["output_2_1"] = { relu(output_2_1_BA) };
			lTable["output_2_2"] = { relu(output_2_2_BA) };
			lTable["output_2_3"] = { relu(output_2_3_BA) };
			lTable["output_2_4"] = { relu(output_2_4_BA) };
	
			return lTable;
		}
	
		tTable compute_model_outputs_from_table( tTable const & iTable) {
			tTable lTable = compute_features(iTable.at("output_1_0")[0], iTable.at("output_1_1")[0], iTable.at("output_1_2")[0]);
	
			return lTable;
		}
	
	} // eof namespace HiddenLayer_2
	

	namespace OutputLayer {
	
		std::vector<std::string> get_input_names(){
			std::vector<std::string> lFeatures = { "output_2_0", "output_2_1", "output_2_2", "output_2_3", "output_2_4" };
	
			return lFeatures;
		}
	
		std::vector<std::string> get_output_names(){
			std::vector<std::string> lOutputs = { "Estimator" };
	
			return lOutputs;
		}
	
		tTable compute_features(std::any output_2_0, std::any output_2_1, std::any output_2_2, std::any output_2_3, std::any output_2_4) {
	
			tTable lTable;
	
			double output_3_0_BA = 0.6889873248619912 * output_2_0 + 0.12827517302125518 * output_2_1 + -0.7183978879535052 * output_2_2 + 0.6829620197846361 * output_2_3 + 0.7680834932777408 * output_2_4 + -222.07308927184806;
	
			lTable["Estimator"] = { output_3_0_BA };
	
			return lTable;
		}
	
		tTable compute_model_outputs_from_table( tTable const & iTable) {
			tTable lTable = compute_features(iTable.at("output_2_0")[0], iTable.at("output_2_1")[0], iTable.at("output_2_2")[0], iTable.at("output_2_3")[0], iTable.at("output_2_4")[0]);
	
			return lTable;
		}
	
	} // eof namespace OutputLayer
	

	std::vector<std::string> get_input_names(){
		std::vector<std::string> lFeatures = { "Feature_0", "Feature_1", "Feature_2", "Feature_3" };

		return lFeatures;
	}

	std::vector<std::string> get_output_names(){
		std::vector<std::string> lOutputs = { "Estimator" };

		return lOutputs;
	}

	tTable compute_regression(std::any Feature_0, std::any Feature_1, std::any Feature_2, std::any Feature_3) {
		tTable lTable_InputLayer = InputLayer::compute_features(Feature_0, Feature_1, Feature_2, Feature_3);

		tTable lTable_HiddenLayer_1 = HiddenLayer_1::compute_model_outputs_from_table( lTable_InputLayer );

		tTable lTable_HiddenLayer_2 = HiddenLayer_2::compute_model_outputs_from_table( lTable_HiddenLayer_1 );

		tTable lTable_OutputLayer = OutputLayer::compute_model_outputs_from_table( lTable_HiddenLayer_2 );


		tTable lTable;

		std::any  lEstimator = lTable_OutputLayer[ "Estimator" ][0];
		lTable[ "Estimator" ] = { lEstimator };

		return lTable;
	}

	tTable compute_model_outputs_from_table( tTable const & iTable) {
		tTable lTable = compute_regression(iTable.at("Feature_0")[0], iTable.at("Feature_1")[0], iTable.at("Feature_2")[0], iTable.at("Feature_3")[0]);

		return lTable;
	}

} // eof namespace 


int main() {
	score_csv_file("outputs/ml2cpp-demo/datasets/freidman2.csv");
	return 0;
}
