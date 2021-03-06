// ******************************************************** 

// This C++ code was automatically generated by ml2cpp (development version).
// Copyright 2020

// https://github.com/antoinecarme/ml2cpp
// Model : MLPClassifier_Pipeline
// Dataset : FourClass_10

// This CPP code can be compiled using any C++-17 compiler.
// g++ -Wall -Wno-unused-function -std=c++17 -g -o ml2cpp-demo_MLPClassifier_Pipeline_FourClass_10.exe ml2cpp-demo_MLPClassifier_Pipeline_FourClass_10.cpp

// Model deployment code

// ******************************************************** 

#include "../../Generic.i"

namespace  {

	std::vector<std::any> get_classes(){
		std::vector<std::any> lClasses = { 0, 1, 2, 3 };

		return lClasses;
	}

	namespace imputer {
	
		std::vector<std::string> get_input_names(){
			std::vector<std::string> lFeatures = { "Feature_0", "Feature_1", "Feature_2", "Feature_3", "Feature_4", "Feature_5", "Feature_6", "Feature_7", "Feature_8", "Feature_9" };
	
			return lFeatures;
		}
	
		std::vector<std::string> get_output_names(){
			std::vector<std::string> lOutputs = { "imputer_output_2", "imputer_output_3", "imputer_output_4", "imputer_output_5", "imputer_output_6", "imputer_output_7", "imputer_output_8", "imputer_output_9", "imputer_output_10", "imputer_output_11" };
	
			return lOutputs;
		}
	
		tTable compute_features(std::any Feature_0, std::any Feature_1, std::any Feature_2, std::any Feature_3, std::any Feature_4, std::any Feature_5, std::any Feature_6, std::any Feature_7, std::any Feature_8, std::any Feature_9) {
	
			tTable lTable;
	
			lTable["imputer_output_2"] = { ((Feature_0 == std::any()) ?  ( -0.003903374463034205 ) : ( Feature_0)) };
			lTable["imputer_output_3"] = { ((Feature_1 == std::any()) ?  ( 0.6152232215702322 ) : ( Feature_1)) };
			lTable["imputer_output_4"] = { ((Feature_2 == std::any()) ?  ( 0.042796236914291665 ) : ( Feature_2)) };
			lTable["imputer_output_5"] = { ((Feature_3 == std::any()) ?  ( 0.7709819558904074 ) : ( Feature_3)) };
			lTable["imputer_output_6"] = { ((Feature_4 == std::any()) ?  ( -0.43300733624893334 ) : ( Feature_4)) };
			lTable["imputer_output_7"] = { ((Feature_5 == std::any()) ?  ( -0.0424956965794036 ) : ( Feature_5)) };
			lTable["imputer_output_8"] = { ((Feature_6 == std::any()) ?  ( -0.29809080119845455 ) : ( Feature_6)) };
			lTable["imputer_output_9"] = { ((Feature_7 == std::any()) ?  ( 0.14672241507251663 ) : ( Feature_7)) };
			lTable["imputer_output_10"] = { ((Feature_8 == std::any()) ?  ( 0.01746942384662034 ) : ( Feature_8)) };
			lTable["imputer_output_11"] = { ((Feature_9 == std::any()) ?  ( 0.11507331415602866 ) : ( Feature_9)) };
	
			return lTable;
		}
	
		tTable compute_model_outputs_from_table( tTable const & iTable) {
			tTable lTable = compute_features(iTable.at("Feature_0")[0], iTable.at("Feature_1")[0], iTable.at("Feature_2")[0], iTable.at("Feature_3")[0], iTable.at("Feature_4")[0], iTable.at("Feature_5")[0], iTable.at("Feature_6")[0], iTable.at("Feature_7")[0], iTable.at("Feature_8")[0], iTable.at("Feature_9")[0]);
	
			return lTable;
		}
	
	} // eof namespace imputer
	

	namespace scaler {
	
		std::vector<std::string> get_input_names(){
			std::vector<std::string> lFeatures = { "imputer_output_2", "imputer_output_3", "imputer_output_4", "imputer_output_5", "imputer_output_6", "imputer_output_7", "imputer_output_8", "imputer_output_9", "imputer_output_10", "imputer_output_11" };
	
			return lFeatures;
		}
	
		std::vector<std::string> get_output_names(){
			std::vector<std::string> lOutputs = { "scaler_output_2", "scaler_output_3", "scaler_output_4", "scaler_output_5", "scaler_output_6", "scaler_output_7", "scaler_output_8", "scaler_output_9", "scaler_output_10", "scaler_output_11" };
	
			return lOutputs;
		}
	
		tTable compute_features(std::any imputer_output_2, std::any imputer_output_3, std::any imputer_output_4, std::any imputer_output_5, std::any imputer_output_6, std::any imputer_output_7, std::any imputer_output_8, std::any imputer_output_9, std::any imputer_output_10, std::any imputer_output_11) {
	
			tTable lTable;
	
			lTable["scaler_output_2"] = { ( ( imputer_output_2 - -0.003903374463034205 ) / 0.9795060640183997 ) };
			lTable["scaler_output_3"] = { ( ( imputer_output_3 - 0.6152232215702322 ) / 1.3900807236205235 ) };
			lTable["scaler_output_4"] = { ( ( imputer_output_4 - 0.042796236914291665 ) / 1.4962685135870766 ) };
			lTable["scaler_output_5"] = { ( ( imputer_output_5 - 0.7709819558904074 ) / 2.3333561060111743 ) };
			lTable["scaler_output_6"] = { ( ( imputer_output_6 - -0.43300733624893334 ) / 1.4029757772648748 ) };
			lTable["scaler_output_7"] = { ( ( imputer_output_7 - -0.0424956965794036 ) / 0.9558091076873229 ) };
			lTable["scaler_output_8"] = { ( ( imputer_output_8 - -0.29809080119845455 ) / 1.017013180721433 ) };
			lTable["scaler_output_9"] = { ( ( imputer_output_9 - 0.14672241507251663 ) / 1.600798539929603 ) };
			lTable["scaler_output_10"] = { ( ( imputer_output_10 - 0.01746942384662034 ) / 1.1487296361671415 ) };
			lTable["scaler_output_11"] = { ( ( imputer_output_11 - 0.11507331415602866 ) / 0.9690911857336224 ) };
	
			return lTable;
		}
	
		tTable compute_model_outputs_from_table( tTable const & iTable) {
			tTable lTable = compute_features(iTable.at("imputer_output_2")[0], iTable.at("imputer_output_3")[0], iTable.at("imputer_output_4")[0], iTable.at("imputer_output_5")[0], iTable.at("imputer_output_6")[0], iTable.at("imputer_output_7")[0], iTable.at("imputer_output_8")[0], iTable.at("imputer_output_9")[0], iTable.at("imputer_output_10")[0], iTable.at("imputer_output_11")[0]);
	
			return lTable;
		}
	
	} // eof namespace scaler
	

	namespace model {
	
		std::vector<std::any> get_classes(){
			std::vector<std::any> lClasses = { 0, 1, 2, 3 };
	
			return lClasses;
		}
	
		namespace InputLayer {
		
			std::vector<std::string> get_input_names(){
				std::vector<std::string> lFeatures = { "scaler_output_2", "scaler_output_3", "scaler_output_4", "scaler_output_5", "scaler_output_6", "scaler_output_7", "scaler_output_8", "scaler_output_9", "scaler_output_10", "scaler_output_11" };
		
				return lFeatures;
			}
		
			std::vector<std::string> get_output_names(){
				std::vector<std::string> lOutputs = { "input_0", "input_1", "input_2", "input_3", "input_4", "input_5", "input_6", "input_7", "input_8", "input_9" };
		
				return lOutputs;
			}
		
			tTable compute_features(std::any scaler_output_2, std::any scaler_output_3, std::any scaler_output_4, std::any scaler_output_5, std::any scaler_output_6, std::any scaler_output_7, std::any scaler_output_8, std::any scaler_output_9, std::any scaler_output_10, std::any scaler_output_11) {
		
				tTable lTable;
		
				lTable["input_0"] = { scaler_output_2 };
				lTable["input_1"] = { scaler_output_3 };
				lTable["input_2"] = { scaler_output_4 };
				lTable["input_3"] = { scaler_output_5 };
				lTable["input_4"] = { scaler_output_6 };
				lTable["input_5"] = { scaler_output_7 };
				lTable["input_6"] = { scaler_output_8 };
				lTable["input_7"] = { scaler_output_9 };
				lTable["input_8"] = { scaler_output_10 };
				lTable["input_9"] = { scaler_output_11 };
		
				return lTable;
			}
		
			tTable compute_model_outputs_from_table( tTable const & iTable) {
				tTable lTable = compute_features(iTable.at("scaler_output_2")[0], iTable.at("scaler_output_3")[0], iTable.at("scaler_output_4")[0], iTable.at("scaler_output_5")[0], iTable.at("scaler_output_6")[0], iTable.at("scaler_output_7")[0], iTable.at("scaler_output_8")[0], iTable.at("scaler_output_9")[0], iTable.at("scaler_output_10")[0], iTable.at("scaler_output_11")[0]);
		
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
		
				double output_1_0_BA = -0.8915571560266893 * input_0 + -3.6214666451696282 * input_1 + -2.4384753441219638 * input_2 + -2.774481505983331 * input_3 + -0.6983299293105898 * input_4 + 0.6736046147876601 * input_5 + 1.210862189006117 * input_6 + 1.0648016392034019 * input_7 + 1.9345438523897447 * input_8 + -0.7886925015648862 * input_9 + 0.26889488259480265;
		
				double output_1_1_BA = -0.9915889243637214 * input_0 + 2.4346287467132406 * input_1 + 1.0313196204077755 * input_2 + 1.670908374785835 * input_3 + 0.8267178053774361 * input_4 + 1.9692224648312455 * input_5 + -1.0043636252451567 * input_6 + -2.434455334376673 * input_7 + 1.7924318000446429 * input_8 + -1.6034345581733358 * input_9 + -0.47625268960905615;
		
				double output_1_2_BA = -1.9861311888023971 * input_0 + -0.6404160583448458 * input_1 + -2.8096186494073616 * input_2 + -2.024091824089551 * input_3 + -4.456139983134424 * input_4 + 1.0228664142510562 * input_5 + 2.4079827656521338 * input_6 + -2.443180138719383 * input_7 + -0.2479368657811272 * input_8 + 0.3321548685296951 * input_9 + -1.405152017799284;
		
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
		
				double output_2_0_BA = 1.5422236511453111 * output_1_0 + 0.9892473382605586 * output_1_1 + 3.067890497887239 * output_1_2 + -1.2746638387449958;
		
				double output_2_1_BA = -1.0879852986684844 * output_1_0 + 1.4069015512536975 * output_1_1 + -2.2394202148618074 * output_1_2 + 1.388840254170362;
		
				double output_2_2_BA = 4.301684845138976 * output_1_0 + 0.5336739172093118 * output_1_1 + 1.0086033616685657 * output_1_2 + -3.3307415572145125;
		
				double output_2_3_BA = 0.36757524826855253 * output_1_0 + -0.5047115912403027 * output_1_1 + -1.4502319204704062 * output_1_2 + -0.2881501241642153;
		
				double output_2_4_BA = -0.94153428491015 * output_1_0 + 0.882813749580555 * output_1_1 + -1.2963351320700334 * output_1_2 + 1.1833511718962044;
		
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
				std::vector<std::string> lOutputs = { "Score_0", "Score_1", "Score_2", "Score_3" };
		
				return lOutputs;
			}
		
			tTable compute_features(std::any output_2_0, std::any output_2_1, std::any output_2_2, std::any output_2_3, std::any output_2_4) {
		
				tTable lTable;
		
				double output_3_0_BA = -0.8119856989134075 * output_2_0 + -2.318251479972478 * output_2_1 + 2.1773285338018664 * output_2_2 + 0.45106370086810077 * output_2_3 + -1.2838242209919373 * output_2_4 + 4.699162867352003;
		
				double output_3_1_BA = -0.5536763716291313 * output_2_0 + 0.7324711886154212 * output_2_1 + -3.7798364450711217 * output_2_2 + 0.4106318241011368 * output_2_3 + 1.061791932031451 * output_2_4 + -0.947651320567567;
		
				double output_3_2_BA = -0.6644804804000412 * output_2_0 + 1.2988115944449834 * output_2_1 + 2.2495784115936504 * output_2_2 + -0.6775156485573351 * output_2_3 + -0.2826188698123287 * output_2_4 + -1.458573195747757;
		
				double output_3_3_BA = 2.0019399859045253 * output_2_0 + -0.2972659488352901 * output_2_1 + -1.1157706339396767 * output_2_2 + -0.8140468035068938 * output_2_3 + 0.7481861632478629 * output_2_4 + -1.2681892227963536;
		
				lTable["Score_0"] = { output_3_0_BA };
				lTable["Score_1"] = { output_3_1_BA };
				lTable["Score_2"] = { output_3_2_BA };
				lTable["Score_3"] = { output_3_3_BA };
		
				return lTable;
			}
		
			tTable compute_model_outputs_from_table( tTable const & iTable) {
				tTable lTable = compute_features(iTable.at("output_2_0")[0], iTable.at("output_2_1")[0], iTable.at("output_2_2")[0], iTable.at("output_2_3")[0], iTable.at("output_2_4")[0]);
		
				return lTable;
			}
		
		} // eof namespace OutputLayer
		
	
		std::vector<std::string> get_input_names(){
			std::vector<std::string> lFeatures = { "scaler_output_2", "scaler_output_3", "scaler_output_4", "scaler_output_5", "scaler_output_6", "scaler_output_7", "scaler_output_8", "scaler_output_9", "scaler_output_10", "scaler_output_11" };
	
			return lFeatures;
		}
	
		std::vector<std::string> get_output_names(){
			std::vector<std::string> lOutputs = { 
				"Score_0", "Score_1", "Score_2", "Score_3",
				"Proba_0", "Proba_1", "Proba_2", "Proba_3",
				"LogProba_0", "LogProba_1", "LogProba_2", "LogProba_3",
				"Decision", "DecisionProba" };
	
			return lOutputs;
		}
	
		tTable compute_classification_scores(std::any scaler_output_2, std::any scaler_output_3, std::any scaler_output_4, std::any scaler_output_5, std::any scaler_output_6, std::any scaler_output_7, std::any scaler_output_8, std::any scaler_output_9, std::any scaler_output_10, std::any scaler_output_11) {
			auto lClasses = get_classes();
	
			tTable lTable_InputLayer = InputLayer::compute_features(scaler_output_2, scaler_output_3, scaler_output_4, scaler_output_5, scaler_output_6, scaler_output_7, scaler_output_8, scaler_output_9, scaler_output_10, scaler_output_11);
	
			tTable lTable_HiddenLayer_1 = HiddenLayer_1::compute_model_outputs_from_table( lTable_InputLayer );
	
			tTable lTable_HiddenLayer_2 = HiddenLayer_2::compute_model_outputs_from_table( lTable_HiddenLayer_1 );
	
			tTable lTable_OutputLayer = OutputLayer::compute_model_outputs_from_table( lTable_HiddenLayer_2 );
	
			tTable lScores = tTable();
	
			lScores["Score"] = { lTable_OutputLayer[ "Score_0" ][0], lTable_OutputLayer[ "Score_1" ][0], lTable_OutputLayer[ "Score_2" ][0], lTable_OutputLayer[ "Score_3" ][0] };
	
			tTable lSoftMaxTable = soft_max( lScores );
	
	
			tTable lTable = lSoftMaxTable;
	
			int lBestClass = get_arg_max( lTable["Proba"] );
			auto lDecision = lClasses[lBestClass];
			lTable["Decision"] = { lDecision } ;
			lTable["DecisionProba"] = { lTable["Proba"][lBestClass] };
	
			recompute_log_probas( lTable );
	
			return lTable;
		}
	
		tTable compute_model_outputs_from_table( tTable const & iTable) {
			tTable lTable = compute_classification_scores(iTable.at("scaler_output_2")[0], iTable.at("scaler_output_3")[0], iTable.at("scaler_output_4")[0], iTable.at("scaler_output_5")[0], iTable.at("scaler_output_6")[0], iTable.at("scaler_output_7")[0], iTable.at("scaler_output_8")[0], iTable.at("scaler_output_9")[0], iTable.at("scaler_output_10")[0], iTable.at("scaler_output_11")[0]);
	
			return lTable;
		}
	
	} // eof namespace model
	

	std::vector<std::string> get_input_names(){
		std::vector<std::string> lFeatures = { "Feature_0", "Feature_1", "Feature_2", "Feature_3", "Feature_4", "Feature_5", "Feature_6", "Feature_7", "Feature_8", "Feature_9" };

		return lFeatures;
	}

	std::vector<std::string> get_output_names(){
		std::vector<std::string> lOutputs = { 
			"Score_0", "Score_1", "Score_2", "Score_3",
			"Proba_0", "Proba_1", "Proba_2", "Proba_3",
			"LogProba_0", "LogProba_1", "LogProba_2", "LogProba_3",
			"Decision", "DecisionProba" };

		return lOutputs;
	}

	tTable compute_classification_scores(std::any Feature_0, std::any Feature_1, std::any Feature_2, std::any Feature_3, std::any Feature_4, std::any Feature_5, std::any Feature_6, std::any Feature_7, std::any Feature_8, std::any Feature_9) {
		auto lClasses = get_classes();

		tTable lTable_imputer = imputer::compute_features(Feature_0, Feature_1, Feature_2, Feature_3, Feature_4, Feature_5, Feature_6, Feature_7, Feature_8, Feature_9);

		tTable lTable_scaler = scaler::compute_model_outputs_from_table( lTable_imputer );

		tTable lTable_model = model::compute_model_outputs_from_table( lTable_scaler );


		tTable lTable = lTable_model;

		int lBestClass = get_arg_max( lTable["Proba"] );
		auto lDecision = lClasses[lBestClass];
		lTable["Decision"] = { lDecision } ;
		lTable["DecisionProba"] = { lTable["Proba"][lBestClass] };

		recompute_log_probas( lTable );

		return lTable;
	}

	tTable compute_model_outputs_from_table( tTable const & iTable) {
		tTable lTable = compute_classification_scores(iTable.at("Feature_0")[0], iTable.at("Feature_1")[0], iTable.at("Feature_2")[0], iTable.at("Feature_3")[0], iTable.at("Feature_4")[0], iTable.at("Feature_5")[0], iTable.at("Feature_6")[0], iTable.at("Feature_7")[0], iTable.at("Feature_8")[0], iTable.at("Feature_9")[0]);

		return lTable;
	}

} // eof namespace 


int main() {
	score_csv_file("outputs/ml2cpp-demo/datasets/FourClass_10.csv");
	return 0;
}
