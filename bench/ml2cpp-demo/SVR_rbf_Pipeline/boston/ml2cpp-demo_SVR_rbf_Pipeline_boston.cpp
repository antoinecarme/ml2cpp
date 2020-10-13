// ******************************************************** 

// This C++ code was automatically generated by ml2cpp (development version).
// Copyright 2020

// https://github.com/antoinecarme/ml2cpp
// Model : SVR_rbf_Pipeline
// Dataset : boston

// This CPP code can be compiled using any C++-17 compiler.
// g++ -Wall -Wno-unused-function -std=c++17 -g -o ml2cpp-demo_SVR_rbf_Pipeline_boston.exe ml2cpp-demo_SVR_rbf_Pipeline_boston.cpp

// Model deployment code

// ******************************************************** 

#include "../../Generic.i"

namespace  {

	namespace imputer {
	
		std::vector<std::string> get_input_names(){
			std::vector<std::string> lFeatures = { "Feature_0", "Feature_1", "Feature_2", "Feature_3", "Feature_4", "Feature_5", "Feature_6", "Feature_7", "Feature_8", "Feature_9", "Feature_10", "Feature_11", "Feature_12" };
	
			return lFeatures;
		}
	
		std::vector<std::string> get_output_names(){
			std::vector<std::string> lOutputs = { "imputer_output_2", "imputer_output_3", "imputer_output_4", "imputer_output_5", "imputer_output_6", "imputer_output_7", "imputer_output_8", "imputer_output_9", "imputer_output_10", "imputer_output_11", "imputer_output_12", "imputer_output_13", "imputer_output_14" };
	
			return lOutputs;
		}
	
		tTable compute_features(std::any Feature_0, std::any Feature_1, std::any Feature_2, std::any Feature_3, std::any Feature_4, std::any Feature_5, std::any Feature_6, std::any Feature_7, std::any Feature_8, std::any Feature_9, std::any Feature_10, std::any Feature_11, std::any Feature_12) {
	
			tTable lTable;
	
			lTable["imputer_output_2"] = { ((Feature_0 == std::any()) ?  ( 3.1614581999999998 ) : ( Feature_0)) };
			lTable["imputer_output_3"] = { ((Feature_1 == std::any()) ?  ( 11.2 ) : ( Feature_1)) };
			lTable["imputer_output_4"] = { ((Feature_2 == std::any()) ?  ( 10.962 ) : ( Feature_2)) };
			lTable["imputer_output_5"] = { ((Feature_3 == std::any()) ?  ( 0.04 ) : ( Feature_3)) };
			lTable["imputer_output_6"] = { ((Feature_4 == std::any()) ?  ( 0.555502 ) : ( Feature_4)) };
			lTable["imputer_output_7"] = { ((Feature_5 == std::any()) ?  ( 6.3834800000000005 ) : ( Feature_5)) };
			lTable["imputer_output_8"] = { ((Feature_6 == std::any()) ?  ( 66.40599999999999 ) : ( Feature_6)) };
			lTable["imputer_output_9"] = { ((Feature_7 == std::any()) ?  ( 3.960708000000001 ) : ( Feature_7)) };
			lTable["imputer_output_10"] = { ((Feature_8 == std::any()) ?  ( 10.72 ) : ( Feature_8)) };
			lTable["imputer_output_11"] = { ((Feature_9 == std::any()) ?  ( 422.3 ) : ( Feature_9)) };
			lTable["imputer_output_12"] = { ((Feature_10 == std::any()) ?  ( 18.780000000000012 ) : ( Feature_10)) };
			lTable["imputer_output_13"] = { ((Feature_11 == std::any()) ?  ( 334.1333999999999 ) : ( Feature_11)) };
			lTable["imputer_output_14"] = { ((Feature_12 == std::any()) ?  ( 12.793999999999997 ) : ( Feature_12)) };
	
			return lTable;
		}
	
		tTable compute_model_outputs_from_table( tTable const & iTable) {
			tTable lTable = compute_features(iTable.at("Feature_0")[0], iTable.at("Feature_1")[0], iTable.at("Feature_2")[0], iTable.at("Feature_3")[0], iTable.at("Feature_4")[0], iTable.at("Feature_5")[0], iTable.at("Feature_6")[0], iTable.at("Feature_7")[0], iTable.at("Feature_8")[0], iTable.at("Feature_9")[0], iTable.at("Feature_10")[0], iTable.at("Feature_11")[0], iTable.at("Feature_12")[0]);
	
			return lTable;
		}
	
	} // eof namespace imputer
	

	namespace scaler {
	
		std::vector<std::string> get_input_names(){
			std::vector<std::string> lFeatures = { "imputer_output_2", "imputer_output_3", "imputer_output_4", "imputer_output_5", "imputer_output_6", "imputer_output_7", "imputer_output_8", "imputer_output_9", "imputer_output_10", "imputer_output_11", "imputer_output_12", "imputer_output_13", "imputer_output_14" };
	
			return lFeatures;
		}
	
		std::vector<std::string> get_output_names(){
			std::vector<std::string> lOutputs = { "scaler_output_2", "scaler_output_3", "scaler_output_4", "scaler_output_5", "scaler_output_6", "scaler_output_7", "scaler_output_8", "scaler_output_9", "scaler_output_10", "scaler_output_11", "scaler_output_12", "scaler_output_13", "scaler_output_14" };
	
			return lOutputs;
		}
	
		tTable compute_features(std::any imputer_output_2, std::any imputer_output_3, std::any imputer_output_4, std::any imputer_output_5, std::any imputer_output_6, std::any imputer_output_7, std::any imputer_output_8, std::any imputer_output_9, std::any imputer_output_10, std::any imputer_output_11, std::any imputer_output_12, std::any imputer_output_13, std::any imputer_output_14) {
	
			tTable lTable;
	
			lTable["scaler_output_2"] = { ( ( imputer_output_2 - 3.1614581999999998 ) / 4.6006170533252115 ) };
			lTable["scaler_output_3"] = { ( ( imputer_output_3 - 11.2 ) / 22.99304242591657 ) };
			lTable["scaler_output_4"] = { ( ( imputer_output_4 - 10.962 ) / 6.318784693277657 ) };
			lTable["scaler_output_5"] = { ( ( imputer_output_5 - 0.04 ) / 0.19595917942265434 ) };
			lTable["scaler_output_6"] = { ( ( imputer_output_6 - 0.555502 ) / 0.12705342260639813 ) };
			lTable["scaler_output_7"] = { ( ( imputer_output_7 - 6.3834800000000005 ) / 0.6326183443435704 ) };
			lTable["scaler_output_8"] = { ( ( imputer_output_8 - 66.40599999999999 ) / 29.712572490445858 ) };
			lTable["scaler_output_9"] = { ( ( imputer_output_9 - 3.960708000000001 ) / 2.041379549112805 ) };
			lTable["scaler_output_10"] = { ( ( imputer_output_10 - 10.72 ) / 8.820521526531186 ) };
			lTable["scaler_output_11"] = { ( ( imputer_output_11 - 422.3 ) / 168.69039688138736 ) };
			lTable["scaler_output_12"] = { ( ( imputer_output_12 - 18.780000000000012 ) / 1.9765626729248942 ) };
			lTable["scaler_output_13"] = { ( ( imputer_output_13 - 334.1333999999999 ) / 124.02705565496588 ) };
			lTable["scaler_output_14"] = { ( ( imputer_output_14 - 12.793999999999997 ) / 6.8750941811730835 ) };
	
			return lTable;
		}
	
		tTable compute_model_outputs_from_table( tTable const & iTable) {
			tTable lTable = compute_features(iTable.at("imputer_output_2")[0], iTable.at("imputer_output_3")[0], iTable.at("imputer_output_4")[0], iTable.at("imputer_output_5")[0], iTable.at("imputer_output_6")[0], iTable.at("imputer_output_7")[0], iTable.at("imputer_output_8")[0], iTable.at("imputer_output_9")[0], iTable.at("imputer_output_10")[0], iTable.at("imputer_output_11")[0], iTable.at("imputer_output_12")[0], iTable.at("imputer_output_13")[0], iTable.at("imputer_output_14")[0]);
	
			return lTable;
		}
	
	} // eof namespace scaler
	

	namespace model {
	
		std::vector<std::any> lProblem_data_dual = { 
		 -0.1 , 0.1 , -0.1 , -0.1 , 0.1 , -0.1 , 0.1 , 0.1 , -0.1 , 0.1 , -0.1 , 0.1 , -0.1 , -0.1 , 0.1 , -0.1 , 0.1 , -0.1 , -0.1 , 0.1 , -0.1 , 0.1 , -0.07818085410129808 , 0.1 , -0.1 , 0.1 , 0.1 , -0.1 , 0.1 , -0.1 , -0.1 , -0.1 , 0.1 , 0.07818085410129808 , -0.1 , -0.1 , 0.1 , 0.1 , 0.1 , 0.1 , 0.1 , 0.1 , -0.1 , -0.1 , 0.1 , 0.1 , -0.1 , -0.1 ,};
		
	
		std::vector<std::vector<std::any> > lProblem_data_sv = { 
		 { 2.095554072041671, -0.4871038722294505, 1.1296476057482827, -0.20412414523193143, 1.4521293186375683, -0.8369659285637845, 1.0162028215399037, -1.01162373302775, 1.5055799093120716, 1.4446584067933324, 0.7184189094791962, -0.7547820877117768, 1.5993962715611523 },
		 { -0.6564245980476139, -0.4871038722294505, -0.6412625523244663, -0.20412414523193143, -0.8461165216543052, -0.3390353787836389, -2.0128179752604973, 0.8622561153632546, -0.8752316942687647, -1.1221741337955595, -0.4452173523533153, 0.39698273687132196, -1.0158406293727793 },
		 { 1.050081270404425, -0.4871038722294505, 1.1296476057482827, -0.20412414523193143, 1.1373011213373114, -1.364930384521147, 1.1306324960856968, -1.1891997257712574, 1.5055799093120716, 1.4446584067933324, 0.7184189094791962, 0.5060718378626365, 1.7113947372852416 },
		 { -0.6444544646151439, 0.46970730536411304, -0.8074337467816947, -0.20412414523193143, -0.9799185055069144, -0.24893366025199273, 0.430592134158493, 2.0058944951121997, -0.4217437697771768, -0.5471562205458539, 0.1618972190375615, 0.33868900441254823, -0.38457654983700257 },
		 { -0.6596850302518458, 0.6001815568541444, -0.9229622914995773, -0.20412414523193143, -0.806762996991773, 0.5983386403262875, -0.7742850272354446, 1.9693505804676046, -0.30837178865427983, -0.8198451278601473, 0.4654545047329981, 0.49542899874153273, -0.47912070921448063 },
		 { 1.7386671629664465, -0.4871038722294505, 1.1296476057482827, -0.20412414523193143, 1.4521293186375683, 0.3881012970857812, 0.9488912482776725, -0.8993957056138533, 1.5055799093120716, 1.4446584067933324, 0.7184189094791962, -1.8083425331319625, 1.5237609440591697 },
		 { -0.6794932427032894, 0.9916043113242385, -0.7710343422815399, -0.20412414523193143, -0.9641770956419015, 0.32645275282728736, -0.8752523871287913, 0.7499791014686008, -0.4217437697771768, -0.5530842402700777, -1.3558892094396269, 0.4967996674162205, -0.47912070921448063 },
		 { -0.6761849908267287, -0.4871038722294505, -1.024247590978269, -0.20412414523193143, -0.8382458167217988, 0.008725640110432642, -0.6194684087323129, 0.4010483990377033, -0.8752316942687647, -1.0391818576564267, -0.14166006665787687, 0.5060718378626365, -0.4616664028678694 },
		 { 1.6677636306317503, -0.4871038722294505, 1.1296476057482827, -0.20412414523193143, 0.9720163177546775, 0.6299532784075673, 0.8209992590794334, -1.0489024448836972, 1.5055799093120716, 1.4446584067933324, 0.7184189094791962, -2.5201227131403345, 1.8903013773380077 },
		 { -0.6594807098337139, -0.4871038722294505, -0.6412625523244663, -0.20412414523193143, -0.8461165216543052, 0.6109844955587992, -2.1373443857956254, 0.8622561153632546, -0.8752316942687647, -1.1221741337955595, -0.4452173523533153, 0.4134307609675736, -1.1569296056745542 },
		 { -0.6682556197060366, -0.4871038722294505, 0.2956264678534312, -0.20412414523193143, -0.9326942759118758, -0.3848766040014935, -0.6935111393207672, 0.06358053310390374, -0.6484877320229707, -0.14405087929863766, -0.04047430475939801, 0.4259280341779604, -0.36712224349039135 },
		 { -0.5985606209083755, -0.4871038722294505, -0.7536259314336398, 4.898979485566354, -0.38174493063642656, -0.3469390383039585, 0.8378271523949912, -0.4471035287860451, -0.30837178865427983, -0.6835006742030006, -0.6981817570995132, 0.4926876613921577, 1.2604918233311158 },
		 { 1.9748963442703955, -0.4871038722294505, 1.1296476057482827, -0.20412414523193143, 0.22429934916656719, -0.8638383709328723, -0.22569570514826065, -0.9616575226557836, 1.5055799093120716, 1.4446584067933324, 0.7184189094791962, -2.495289421857759, 0.4212305931648872 },
		 { 2.6358511607122868, -0.4871038722294505, 1.1296476057482827, -0.20412414523193143, 0.909050678294626, 0.41971593516706107, 0.9051387256572223, -1.2813922825556108, 1.5055799093120716, 1.4446584067933324, 0.7184189094791962, 0.2329056337543035, 1.5193973674725167 },
		 { -0.6803344342119811, 3.64458075828821, -1.502187597893345, -0.20412414523193143, -1.2002982436170937, 0.9350345358919104, -1.7200126315697921, 1.8089198559889876, -0.8752316942687647, -0.12033880040174258, -0.900553280896471, 0.5060718378626365, -1.1976563204833142 },
		 { -0.6498580875882908, 0.6001815568541444, -0.9229622914995773, -0.20412414523193143, -0.806762996991773, -0.6599239553086211, 0.9085043043203342, 1.3999317281502168, -0.30837178865427983, -0.8198451278601473, 0.4654545047329981, 0.35433075281780696, 0.2394149020543525 },
		 { -0.6598393573761795, 1.4700099001210203, -1.1904187854354975, -0.20412414523193143, -0.9326942759118758, 0.2727078680891131, -1.2555627760603971, 0.2968541544679267, -0.6484877320229707, -0.14405087929863766, -1.8112251379827844, 0.39270947570906034, -1.1976563204833142 },
		 { 0.9978600145999774, -0.4871038722294505, 1.1296476057482827, -0.20412414523193143, 1.239620285459895, -0.13037876744719568, 0.582043173998513, -0.5768687163108868, 1.5055799093120716, 1.4446584067933324, 0.7184189094791962, -0.4992733212361844, 0.49977497172463836 },
		 { -0.6132651701494615, -0.4871038722294505, 1.7294464885986596, -0.20412414523193143, 0.5391275464668241, 0.11779614149084558, 1.0936111307914698, -0.9024328674207766, -0.7618597131458678, 0.08714188994608933, 1.2243477189715921, 0.49107511001017234, -0.028217795260354596 },
		 { -0.6828145363086668, 3.64458075828821, -1.3106950785664437, -0.20412414523193143, -1.0971920090012597, 2.609029622295642, -1.1613265734932736, 0.5669166228803287, -0.7618597131458678, -1.1755263113135734, -2.0641895427289825, 0.45487333148459924, -1.4420166093358726 },
		 { -0.5167259462036243, -0.4871038722294505, -0.44660486738885574, -0.20412414523193143, -0.13775307772872744, -0.6219863896110862, 0.5147316007362819, 0.1455839018908369, -0.7618597131458678, -0.6835006742030006, 1.1231619570731133, 0.4242348552268758, 0.27286898921869096 },
		 { -0.6153540203816393, -0.4871038722294505, -0.7536259314336398, -0.20412414523193143, -0.38174493063642656, -0.4702361268209462, -0.1651152892122527, -0.15127417149555092, -0.30837178865427983, -0.6835006742030006, -0.6981817570995132, 0.34360728612760394, -0.2783961862284502 },
		 { -0.658669949025595, -0.4871038722294505, -0.38013638960596435, -0.20412414523193143, -0.27942576651384304, -0.40542611875432477, 0.6325268539451864, -0.9005223946712604, -0.6484877320229707, -0.22704315543777043, 1.072569076123873, 0.43181384672220735, 0.18850650854340284 },
		 { -0.6519447641989992, 0.3827244710374254, -0.6333496383026935, -0.20412414523193143, -0.7201852427342024, -0.22680341359509695, -1.6863568449386765, 0.22939977046577242, -0.8752316942687647, -1.1814543310377972, -0.09106718570863655, 0.5060718378626365, -0.9023876381198055 },
		 { -0.4150895799118379, -0.4871038722294505, -0.44660486738885574, -0.20412414523193143, -0.13775307772872744, -1.2858937893179478, 1.066686501486577, -0.07975390959057967, -0.7618597131458678, -0.6835006742030006, 1.1231619570731133, 0.342155989883817, 1.1964927000602072 },
		 { -0.651449178503956, 0.46970730536411304, -0.8074337467816947, -0.20412414523193143, -0.9799185055069144, 0.07827784388924611, -0.5824470434380857, 1.8937154541790595, -0.4217437697771768, -0.5471562205458539, 0.1618972190375615, 0.3271592620313523, -0.4762116581567122 },
		 { -0.6622716398005365, 0.3827244710374254, -0.6333496383026935, -0.20412414523193143, -0.7201852427342024, 0.24425469381596224, -0.2593514917793762, -0.021166078605411344, -0.8752316942687647, -1.1814543310377972, -0.09106718570863655, 0.49043008945737787, -0.7365717278269978 },
		 { 1.0953143331844688, -0.4871038722294505, 1.1296476057482827, -0.20412414523193143, 1.239620285459895, -0.7073459124305402, 0.4676134994527199, -0.5787791890604033, 1.5055799093120716, 1.4446584067933324, 0.7184189094791962, -2.6658167305027187, 0.6030462842754222 },
		 { 0.5585559002661792, -0.4871038722294505, 1.1296476057482827, -0.20412414523193143, -0.184977307323766, 1.070977479641411, 0.3565494035700386, -0.26947854956178074, 1.5055799093120716, 1.4446584067933324, 0.7184189094791962, 0.4930101716685545, -0.8412975659066658 },
		 { -0.08297108748142892, -0.4871038722294505, 1.3638698607927566, -0.20412414523193143, 2.483191664795909, -2.3402419693286083, 1.0565897654972425, -1.2809024177480426, -0.6484877320229707, -0.11441078067751881, -2.0641895427289825, 0.5060718378626365, 2.399385312447505 },
		 { 0.19061612601860897, -0.4871038722294505, 1.1296476057482827, -0.20412414523193143, -0.184977307323766, -0.24419146453980067, 0.8176336804163221, -0.4219734641577915, 1.5055799093120716, 1.4446584067933324, 0.7184189094791962, 0.49341330951405094, 0.011054394019520844 },
		 { -0.15536572414419403, -0.4871038722294505, 1.3638698607927566, -0.20412414523193143, 2.483191664795909, -1.7569518967290072, 0.9286977762990034, -1.0896102103926226, -0.6484877320229707, -0.11441078067751881, -2.0641895427289825, -1.9794342347606173, 0.48668424196467985 },
		 { -0.3570038933827118, -0.4871038722294505, 1.3638698607927566, 4.898979485566354, 0.38958415274920205, 3.1480592015814506, 0.925332197635892, -0.8811237482915558, -0.6484877320229707, -0.11441078067751881, -2.0641895427289825, 0.43794154197375196, -1.3780174860649643 },
		 { 0.7911355711228577, -0.4871038722294505, 1.1296476057482827, -0.20412414523193143, 1.239620285459895, -0.4781397863412658, 0.605602224640294, -0.6090038476873672, 1.5055799093120716, 1.4446584067933324, 0.7184189094791962, 0.5060718378626365, 0.27723256580534367 },
		 { 1.4264873002756506, -0.4871038722294505, 1.1296476057482827, -0.20412414523193143, 1.4521293186375683, 0.03559808247951905, 1.0363962935185733, -0.9285916481449236, 1.5055799093120716, 1.4446584067933324, 0.7184189094791962, 0.4178652772680332, 0.9783138707275656 },
		 { -0.6485278312489642, -0.4871038722294505, -0.20130453271389961, -0.20412414523193143, 0.2321700540990736, -1.2874745212220124, 0.23875415036113415, -0.7645849105710579, -0.5351157509000738, -0.18554701736820403, 0.21249009998680005, 0.4969609225544189, 0.3354135869607148 },
		 { -0.6770392240642374, 2.992209500838053, -1.4942746838715724, -0.20412414523193143, -1.1924275386845873, 1.1436911472283535, -1.0031443763270305, 1.6402104162624662, -0.9886036753916616, -0.5530842402700777, -3.126640042663014, 0.16267902106883786, -0.6085734812851815 },
		 { -0.6652625429425518, -0.4871038722294505, -0.15066188297455377, -0.20412414523193143, -0.06691673333616963, 0.524044240835282, 0.5113660220731701, -0.6285984399900988, -0.5351157509000738, 0.05750179132497049, -0.4958102333025538, 0.49550962631063195, -0.3831220243081183 },
		 { -0.6447109519485433, -0.4871038722294505, -0.024055258626189138, -0.20412414523193143, -1.12159119429203, -0.21889975407477735, -2.0262802899129437, 0.6498507348016411, -0.7618597131458678, -0.6953567136514481, 0.21249009998680005, 0.3469936440297735, -0.7642077128757991 },
		 { -0.6609174736250454, -0.4871038722294505, -1.2774608396749978, -0.20412414523193143, -0.8697286364518244, 2.664355238937881, 0.32289361693892304, -0.2280359868415029, -0.9886036753916616, -0.8672692856539375, -0.3946244714040749, 0.5060718378626365, -1.2485647139942635 },
		 { -0.6457238595533248, 0.46970730536411304, -0.8074337467816947, -0.20412414523193143, -0.9799185055069144, 0.528786436547474, -1.6459699009813378, 1.8937154541790595, -0.4217437697771768, -0.5471562205458539, 0.1618972190375615, 0.48059352602726696, -0.9067512147064584 },
		 { -0.6133151634432596, 0.46970730536411304, -0.8074337467816947, -0.20412414523193143, -0.9799185055069144, -0.4354600249315401, -1.060359213599927, 2.0058944951121997, -0.4217437697771768, -0.5471562205458539, 0.1618972190375615, 0.4518901114279261, -0.5285745771965461 },
		 { 0.7729966999599809, -0.4871038722294505, 1.1296476057482827, -0.20412414523193143, 1.239620285459895, 0.5777891255734562, 0.8815796750154413, -0.8019615953885191, 1.5055799093120716, 1.4446584067933324, 0.7184189094791962, -2.6914562974762872, 0.6757725607196361 },
		 { 1.3985627852571392, -0.4871038722294505, 1.1296476057482827, -0.20412414523193143, 1.0822061868097665, 0.03243661867139149, 1.1306324960856968, -1.137323042649775, 1.5055799093120716, 1.4446584067933324, 0.7184189094791962, 0.33844712170525065, 1.0932213875094234 },
		 { -0.6764610407533537, 0.9481128941608947, -1.3898242187841716, -0.20412414523193143, -0.6572196032741514, 0.7358623159798527, 0.1310556331415642, -0.3811187392065955, -0.4217437697771768, -1.187382350762021, -0.1922529476071172, 0.5060718378626365, -0.7656622384046834 },
		 { -0.580026150638052, -0.4871038722294505, -0.1680702938224538, -0.20412414523193143, -0.0905288481336889, 0.3975856885101653, 0.5416562300411742, -0.31508496314638923, -0.7618597131458678, -0.7012847333756719, -0.1922529476071172, 0.5060718378626365, -1.2005653715410827 },
		 { 2.6117674348303606, -0.4871038722294505, 1.1296476057482827, -0.20412414523193143, 1.4521293186375683, -0.3659078211527253, 1.1306324960856968, -1.0025122476069797, 1.5055799093120716, 1.4446584067933324, 0.7184189094791962, -2.6188914852869427, 1.98630006224437 },
		 { -0.550295356178396, -0.4871038722294505, -0.44660486738885574, -0.20412414523193143, -0.13775307772872744, -0.686796397677709, -0.15501855322291813, 0.3658271193735426, -0.7618597131458678, -0.6835006742030006, 1.1231619570731133, 0.5060718378626365, -0.6594818747961312 },
		};
		
	
		std::vector<std::string> get_input_names(){
			std::vector<std::string> lFeatures = { "scaler_output_2", "scaler_output_3", "scaler_output_4", "scaler_output_5", "scaler_output_6", "scaler_output_7", "scaler_output_8", "scaler_output_9", "scaler_output_10", "scaler_output_11", "scaler_output_12", "scaler_output_13", "scaler_output_14" };
	
			return lFeatures;
		}
	
		std::vector<std::string> get_output_names(){
			std::vector<std::string> lOutputs = { "Estimator" };
	
			return lOutputs;
		}
	
		tTable compute_regression(std::any scaler_output_2, std::any scaler_output_3, std::any scaler_output_4, std::any scaler_output_5, std::any scaler_output_6, std::any scaler_output_7, std::any scaler_output_8, std::any scaler_output_9, std::any scaler_output_10, std::any scaler_output_11, std::any scaler_output_12, std::any scaler_output_13, std::any scaler_output_14) {
			std::vector<std::any> inputs = { scaler_output_2, scaler_output_3, scaler_output_4, scaler_output_5, scaler_output_6, scaler_output_7, scaler_output_8, scaler_output_9, scaler_output_10, scaler_output_11, scaler_output_12, scaler_output_13, scaler_output_14 };
	
			std::any lDotProduct = rbf_kernel( lProblem_data_dual, lProblem_data_sv, inputs, 0.07692307692307693 ) + 20.59434556774795;
	
	
			tTable lTable;
	
			std::any  lEstimator = lDotProduct;
			lTable[ "Estimator" ] = { lEstimator };
	
			return lTable;
		}
	
		tTable compute_model_outputs_from_table( tTable const & iTable) {
			tTable lTable = compute_regression(iTable.at("scaler_output_2")[0], iTable.at("scaler_output_3")[0], iTable.at("scaler_output_4")[0], iTable.at("scaler_output_5")[0], iTable.at("scaler_output_6")[0], iTable.at("scaler_output_7")[0], iTable.at("scaler_output_8")[0], iTable.at("scaler_output_9")[0], iTable.at("scaler_output_10")[0], iTable.at("scaler_output_11")[0], iTable.at("scaler_output_12")[0], iTable.at("scaler_output_13")[0], iTable.at("scaler_output_14")[0]);
	
			return lTable;
		}
	
	} // eof namespace model
	

	std::vector<std::string> get_input_names(){
		std::vector<std::string> lFeatures = { "Feature_0", "Feature_1", "Feature_2", "Feature_3", "Feature_4", "Feature_5", "Feature_6", "Feature_7", "Feature_8", "Feature_9", "Feature_10", "Feature_11", "Feature_12" };

		return lFeatures;
	}

	std::vector<std::string> get_output_names(){
		std::vector<std::string> lOutputs = { "Estimator" };

		return lOutputs;
	}

	tTable compute_regression(std::any Feature_0, std::any Feature_1, std::any Feature_2, std::any Feature_3, std::any Feature_4, std::any Feature_5, std::any Feature_6, std::any Feature_7, std::any Feature_8, std::any Feature_9, std::any Feature_10, std::any Feature_11, std::any Feature_12) {
		tTable lTable_imputer = imputer::compute_features(Feature_0, Feature_1, Feature_2, Feature_3, Feature_4, Feature_5, Feature_6, Feature_7, Feature_8, Feature_9, Feature_10, Feature_11, Feature_12);

		tTable lTable_scaler = scaler::compute_model_outputs_from_table( lTable_imputer );

		tTable lTable_model = model::compute_model_outputs_from_table( lTable_scaler );


		tTable lTable;

		std::any  lEstimator = lTable_model[ "Estimator" ][0];
		lTable[ "Estimator" ] = { lEstimator };

		return lTable;
	}

	tTable compute_model_outputs_from_table( tTable const & iTable) {
		tTable lTable = compute_regression(iTable.at("Feature_0")[0], iTable.at("Feature_1")[0], iTable.at("Feature_2")[0], iTable.at("Feature_3")[0], iTable.at("Feature_4")[0], iTable.at("Feature_5")[0], iTable.at("Feature_6")[0], iTable.at("Feature_7")[0], iTable.at("Feature_8")[0], iTable.at("Feature_9")[0], iTable.at("Feature_10")[0], iTable.at("Feature_11")[0], iTable.at("Feature_12")[0]);

		return lTable;
	}

} // eof namespace 


int main() {
	score_csv_file("outputs/ml2cpp-demo/datasets/boston.csv");
	return 0;
}
