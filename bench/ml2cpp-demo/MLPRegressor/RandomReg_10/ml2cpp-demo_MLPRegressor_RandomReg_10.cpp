// ******************************************************** 

// This C++ code was automatically generated by ml2cpp (development version).
// Copyright 2020

// https://github.com/antoinecarme/ml2cpp
// Model : MLPRegressor
// Dataset : RandomReg_10

// This CPP code can be compiled using any C++-17 compiler.
// g++ -Wall -Wno-unused-function -std=c++17 -g -o ml2cpp-demo_MLPRegressor_RandomReg_10.exe ml2cpp-demo_MLPRegressor_RandomReg_10.cpp

// Model deployment code

// ******************************************************** 

#include "../../Generic.i"

namespace  {

	namespace InputLayer {
	
		std::vector<std::string> get_input_names(){
			std::vector<std::string> lFeatures = { "Feature_0", "Feature_1", "Feature_2", "Feature_3", "Feature_4", "Feature_5", "Feature_6", "Feature_7", "Feature_8", "Feature_9" };
	
			return lFeatures;
		}
	
		std::vector<std::string> get_output_names(){
			std::vector<std::string> lOutputs = { "input_0", "input_1", "input_2", "input_3", "input_4", "input_5", "input_6", "input_7", "input_8", "input_9" };
	
			return lOutputs;
		}
	
		tTable compute_features(std::any Feature_0, std::any Feature_1, std::any Feature_2, std::any Feature_3, std::any Feature_4, std::any Feature_5, std::any Feature_6, std::any Feature_7, std::any Feature_8, std::any Feature_9) {
	
			tTable lTable;
	
			lTable["input_0"] = { Feature_0 };
			lTable["input_1"] = { Feature_1 };
			lTable["input_2"] = { Feature_2 };
			lTable["input_3"] = { Feature_3 };
			lTable["input_4"] = { Feature_4 };
			lTable["input_5"] = { Feature_5 };
			lTable["input_6"] = { Feature_6 };
			lTable["input_7"] = { Feature_7 };
			lTable["input_8"] = { Feature_8 };
			lTable["input_9"] = { Feature_9 };
	
			return lTable;
		}
	
		tTable compute_model_outputs_from_table( tTable const & iTable) {
			tTable lTable = compute_features(iTable.at("Feature_0")[0], iTable.at("Feature_1")[0], iTable.at("Feature_2")[0], iTable.at("Feature_3")[0], iTable.at("Feature_4")[0], iTable.at("Feature_5")[0], iTable.at("Feature_6")[0], iTable.at("Feature_7")[0], iTable.at("Feature_8")[0], iTable.at("Feature_9")[0]);
	
			return lTable;
		}
	
	} // eof namespace InputLayer
	

	namespace HiddenLayer_1 {
	
		std::vector<std::string> get_input_names(){
			std::vector<std::string> lFeatures = { "input_0", "input_1", "input_2", "input_3", "input_4", "input_5", "input_6", "input_7", "input_8", "input_9" };
	
			return lFeatures;
		}
	
		std::vector<std::string> get_output_names(){
			std::vector<std::string> lOutputs = { "output_1_0", "output_1_1", "output_1_2" };
	
			return lOutputs;
		}
	
		tTable compute_features(std::any input_0, std::any input_1, std::any input_2, std::any input_3, std::any input_4, std::any input_5, std::any input_6, std::any input_7, std::any input_8, std::any input_9) {
	
			tTable lTable;
	
			double output_1_0_BA = -61.01023938757099 * input_0 + -3.5564441026910965 * input_1 + -13.069116378963827 * input_2 + -11.537100151318517 * input_3 + -9.356397069748601 * input_4 + -43.23710255736351 * input_5 + 2.613607946641895 * input_6 + 29.373337543289402 * input_7 + 5.422357635381177 * input_8 + -10.383281025610358 * input_9 + 59.965846193262045;
	
			double output_1_1_BA = -40.05101129942849 * input_0 + -15.712364683494103 * input_1 + -30.415059773743284 * input_2 + -17.696517768814292 * input_3 + -6.6887055670315245 * input_4 + -24.671323048509493 * input_5 + 12.689280104939549 * input_6 + 13.989998336884472 * input_7 + -10.006833770809797 * input_8 + -8.624915885431452 * input_9 + 26.011282240855493;
	
			double output_1_2_BA = 0.751147289663254 * input_0 + 1.6437719670621114 * input_1 + 2.069809717290886 * input_2 + 0.7532315337484161 * input_3 + 1.170005569545164 * input_4 + 1.856622443613665 * input_5 + 0.7414595360357814 * input_6 + 0.8865854031571607 * input_7 + 1.796082485568716 * input_8 + 1.327523794137473 * input_9 + 17.133774409155507;
	
			lTable["output_1_0"] = { relu(output_1_0_BA) };
			lTable["output_1_1"] = { relu(output_1_1_BA) };
			lTable["output_1_2"] = { relu(output_1_2_BA) };
	
			return lTable;
		}
	
		tTable compute_model_outputs_from_table( tTable const & iTable) {
			tTable lTable = compute_features(iTable.at("input_0")[0], iTable.at("input_1")[0], iTable.at("input_2")[0], iTable.at("input_3")[0], iTable.at("input_4")[0], iTable.at("input_5")[0], iTable.at("input_6")[0], iTable.at("input_7")[0], iTable.at("input_8")[0], iTable.at("input_9")[0]);
	
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
	
			double output_2_0_BA = 0.22894422824470773 * output_1_0 + -3.5576437305731883 * output_1_1 + -4.8872332293771015 * output_1_2 + -0.14141976992170127;
	
			double output_2_1_BA = -17.332117414557988 * output_1_0 + -33.05042050876684 * output_1_1 + -10.870649906444564 * output_1_2 + 38.13148680668851;
	
			double output_2_2_BA = -1.3691750744536414e-06 * output_1_0 + -1.7378219088357375e-07 * output_1_1 + 15.998980814203005 * output_1_2 + -113.44122569563754;
	
			double output_2_3_BA = -5.528347217699334 * output_1_0 + -0.5047406575065106 * output_1_1 + -0.4066300721972438 * output_1_2 + -1.4964147458246297;
	
			double output_2_4_BA = -0.6062422037711334 * output_1_0 + -0.6491411176216265 * output_1_1 + -0.800371521031473 * output_1_2 + -1.2435281947493726;
	
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
	
			double output_3_0_BA = 0.7268234884513376 * output_2_0 + -34.059597677469334 * output_2_1 + 2.857603143031939 * output_2_2 + 0.6023920881060053 * output_2_3 + -9.007743559936996 * output_2_4 + -459.1642227961579;
	
			lTable["Estimator"] = { output_3_0_BA };
	
			return lTable;
		}
	
		tTable compute_model_outputs_from_table( tTable const & iTable) {
			tTable lTable = compute_features(iTable.at("output_2_0")[0], iTable.at("output_2_1")[0], iTable.at("output_2_2")[0], iTable.at("output_2_3")[0], iTable.at("output_2_4")[0]);
	
			return lTable;
		}
	
	} // eof namespace OutputLayer
	

	std::vector<std::string> get_input_names(){
		std::vector<std::string> lFeatures = { "Feature_0", "Feature_1", "Feature_2", "Feature_3", "Feature_4", "Feature_5", "Feature_6", "Feature_7", "Feature_8", "Feature_9" };

		return lFeatures;
	}

	std::vector<std::string> get_output_names(){
		std::vector<std::string> lOutputs = { "Estimator" };

		return lOutputs;
	}

	tTable compute_regression(std::any Feature_0, std::any Feature_1, std::any Feature_2, std::any Feature_3, std::any Feature_4, std::any Feature_5, std::any Feature_6, std::any Feature_7, std::any Feature_8, std::any Feature_9) {
		tTable lTable_InputLayer = InputLayer::compute_features(Feature_0, Feature_1, Feature_2, Feature_3, Feature_4, Feature_5, Feature_6, Feature_7, Feature_8, Feature_9);

		tTable lTable_HiddenLayer_1 = HiddenLayer_1::compute_model_outputs_from_table( lTable_InputLayer );

		tTable lTable_HiddenLayer_2 = HiddenLayer_2::compute_model_outputs_from_table( lTable_HiddenLayer_1 );

		tTable lTable_OutputLayer = OutputLayer::compute_model_outputs_from_table( lTable_HiddenLayer_2 );


		tTable lTable;

		std::any  lEstimator = lTable_OutputLayer[ "Estimator" ][0];
		lTable[ "Estimator" ] = { lEstimator };

		return lTable;
	}

	tTable compute_model_outputs_from_table( tTable const & iTable) {
		tTable lTable = compute_regression(iTable.at("Feature_0")[0], iTable.at("Feature_1")[0], iTable.at("Feature_2")[0], iTable.at("Feature_3")[0], iTable.at("Feature_4")[0], iTable.at("Feature_5")[0], iTable.at("Feature_6")[0], iTable.at("Feature_7")[0], iTable.at("Feature_8")[0], iTable.at("Feature_9")[0]);

		return lTable;
	}

} // eof namespace 


int main() {
	score_csv_file("outputs/ml2cpp-demo/datasets/RandomReg_10.csv");
	return 0;
}
