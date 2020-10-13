// ******************************************************** 

// This C++ code was automatically generated by ml2cpp (development version).
// Copyright 2020

// https://github.com/antoinecarme/ml2cpp
// Model : GaussianNB_Pipeline
// Dataset : FourClass_10

// This CPP code can be compiled using any C++-17 compiler.
// g++ -Wall -Wno-unused-function -std=c++17 -g -o ml2cpp-demo_GaussianNB_Pipeline_FourClass_10.exe ml2cpp-demo_GaussianNB_Pipeline_FourClass_10.cpp

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
	
			tTable lLogLikelihoodTable = tTable();
	
			lLogLikelihoodTable["Score"] = {
				-1.491654876777717 + log_normal_cdf( scaler_output_2 , 0.12850936110338088 , 1.6210998953860998 ) + log_normal_cdf( scaler_output_3 , -0.5894853959123594 , 0.6717467335603663 ) + log_normal_cdf( scaler_output_4 , -0.14801104071178056 , 0.5000558097742381 ) + log_normal_cdf( scaler_output_5 , -0.4754829817195303 , 0.14829758219081385 ) + log_normal_cdf( scaler_output_6 , 0.801905341367292 , 0.4181769667560316 ) + log_normal_cdf( scaler_output_7 , -0.1991965192220112 , 0.31449011769377605 ) + log_normal_cdf( scaler_output_8 , 0.4395182129547359 , 0.2801697367130911 ) + log_normal_cdf( scaler_output_9 , 0.12340031909076317 , 0.7659438643981343 ) + log_normal_cdf( scaler_output_10 , 0.40357025839170735 , 0.8721570035153503 ) + log_normal_cdf( scaler_output_11 , 0.09870320795085713 , 1.2656495992754975 ),
				-1.3862943611198906 + log_normal_cdf( scaler_output_2 , -0.05298699472844735 , 0.7756129794283401 ) + log_normal_cdf( scaler_output_3 , 0.3605552729844554 , 0.5533217080329645 ) + log_normal_cdf( scaler_output_4 , 0.7948406445641478 , 0.9557697504631304 ) + log_normal_cdf( scaler_output_5 , 0.8936566583844016 , 0.5202589659931404 ) + log_normal_cdf( scaler_output_6 , 0.16987435186219468 , 1.4700700326436593 ) + log_normal_cdf( scaler_output_7 , -0.2786791750117442 , 0.9763560011593833 ) + log_normal_cdf( scaler_output_8 , -0.8956718805550314 , 0.6632664214638294 ) + log_normal_cdf( scaler_output_9 , 0.6738582822512323 , 0.4421685238865845 ) + log_normal_cdf( scaler_output_10 , -0.20401263319909058 , 0.8496193698936102 ) + log_normal_cdf( scaler_output_11 , -0.07083266262274268 , 0.8665779380062887 ),
				-1.3862943611198906 + log_normal_cdf( scaler_output_2 , 0.045360401938138714 , 0.9370711483068086 ) + log_normal_cdf( scaler_output_3 , -0.5876778050212879 , 1.1283978789928049 ) + log_normal_cdf( scaler_output_4 , -0.7408138640905517 , 0.5809540008917913 ) + log_normal_cdf( scaler_output_5 , -0.7306788392442229 , 1.1523016211893171 ) + log_normal_cdf( scaler_output_6 , -0.35237818545821553 , 0.7835379017103893 ) + log_normal_cdf( scaler_output_7 , 0.23356813470531584 , 1.4736679140370286 ) + log_normal_cdf( scaler_output_8 , 0.6242019441344613 , 1.1288670441844375 ) + log_normal_cdf( scaler_output_9 , -0.11725491493740212 , 1.5240270130307754 ) + log_normal_cdf( scaler_output_10 , 0.2195369339288828 , 0.36806262410464724 ) + log_normal_cdf( scaler_output_11 , 0.02765649597706878 , 1.002409321226817 ),
				-1.2909841813155656 + log_normal_cdf( scaler_output_2 , -0.09821075654794037 , 0.7254433676991361 ) + log_normal_cdf( scaler_output_3 , 0.688781262143597 , 0.3670343007233382 ) + log_normal_cdf( scaler_output_4 , 0.07198468742455133 , 0.7338478875154928 ) + log_normal_cdf( scaler_output_5 , 0.24086987673399848 , 0.540147288243371 ) + log_normal_cdf( scaler_output_6 , -0.49019179421321984 , 0.33994669551879164 ) + log_normal_cdf( scaler_output_7 , 0.20398900691476224 , 0.9574862112407423 ) + log_normal_cdf( scaler_output_8 , -0.1128149593079018 , 0.5236354731969861 ) + log_normal_cdf( scaler_output_9 , -0.6069669586322881 , 0.4160605789579687 ) + log_normal_cdf( scaler_output_10 , -0.3443068484384806 , 1.4823410021744456 ) + log_normal_cdf( scaler_output_11 , -0.04150610955463384 , 0.8868025761616198 ) 
			};
	
			tTable lSoftMaxTable = soft_max(lLogLikelihoodTable);
	
	
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
