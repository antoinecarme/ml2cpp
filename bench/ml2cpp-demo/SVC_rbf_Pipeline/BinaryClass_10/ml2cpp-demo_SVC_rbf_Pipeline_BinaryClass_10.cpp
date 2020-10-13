// ******************************************************** 

// This C++ code was automatically generated by ml2cpp (development version).
// Copyright 2020

// https://github.com/antoinecarme/ml2cpp
// Model : SVC_rbf_Pipeline
// Dataset : BinaryClass_10

// This CPP code can be compiled using any C++-17 compiler.
// g++ -Wall -Wno-unused-function -std=c++17 -g -o ml2cpp-demo_SVC_rbf_Pipeline_BinaryClass_10.exe ml2cpp-demo_SVC_rbf_Pipeline_BinaryClass_10.cpp

// Model deployment code

// ******************************************************** 

#include "../../Generic.i"

namespace  {

	std::vector<std::any> get_classes(){
		std::vector<std::any> lClasses = { 0, 1 };

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
	
			lTable["imputer_output_2"] = { ((Feature_0 == std::any()) ?  ( 0.061829205238134496 ) : ( Feature_0)) };
			lTable["imputer_output_3"] = { ((Feature_1 == std::any()) ?  ( 0.17702463767183324 ) : ( Feature_1)) };
			lTable["imputer_output_4"] = { ((Feature_2 == std::any()) ?  ( 0.04138385004903454 ) : ( Feature_2)) };
			lTable["imputer_output_5"] = { ((Feature_3 == std::any()) ?  ( 0.13060646805847148 ) : ( Feature_3)) };
			lTable["imputer_output_6"] = { ((Feature_4 == std::any()) ?  ( -0.05955810471983082 ) : ( Feature_4)) };
			lTable["imputer_output_7"] = { ((Feature_5 == std::any()) ?  ( -0.04892908987010584 ) : ( Feature_5)) };
			lTable["imputer_output_8"] = { ((Feature_6 == std::any()) ?  ( 0.19101797861713127 ) : ( Feature_6)) };
			lTable["imputer_output_9"] = { ((Feature_7 == std::any()) ?  ( 0.02204959673267471 ) : ( Feature_7)) };
			lTable["imputer_output_10"] = { ((Feature_8 == std::any()) ?  ( -0.057729814034140035 ) : ( Feature_8)) };
			lTable["imputer_output_11"] = { ((Feature_9 == std::any()) ?  ( -0.05254959205203237 ) : ( Feature_9)) };
	
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
	
			lTable["scaler_output_2"] = { ( ( imputer_output_2 - 0.061829205238134496 ) / 1.2283839562090673 ) };
			lTable["scaler_output_3"] = { ( ( imputer_output_3 - 0.17702463767183324 ) / 0.940821656314017 ) };
			lTable["scaler_output_4"] = { ( ( imputer_output_4 - 0.04138385004903454 ) / 1.0741824888811282 ) };
			lTable["scaler_output_5"] = { ( ( imputer_output_5 - 0.13060646805847148 ) / 1.0792244559733761 ) };
			lTable["scaler_output_6"] = { ( ( imputer_output_6 - -0.05955810471983082 ) / 1.1095891190508123 ) };
			lTable["scaler_output_7"] = { ( ( imputer_output_7 - -0.04892908987010584 ) / 1.3781871812029047 ) };
			lTable["scaler_output_8"] = { ( ( imputer_output_8 - 0.19101797861713127 ) / 0.9735285246303208 ) };
			lTable["scaler_output_9"] = { ( ( imputer_output_9 - 0.02204959673267471 ) / 0.47460301203797095 ) };
			lTable["scaler_output_10"] = { ( ( imputer_output_10 - -0.057729814034140035 ) / 1.064607524840552 ) };
			lTable["scaler_output_11"] = { ( ( imputer_output_11 - -0.05254959205203237 ) / 1.2245328896554564 ) };
	
			return lTable;
		}
	
		tTable compute_model_outputs_from_table( tTable const & iTable) {
			tTable lTable = compute_features(iTable.at("imputer_output_2")[0], iTable.at("imputer_output_3")[0], iTable.at("imputer_output_4")[0], iTable.at("imputer_output_5")[0], iTable.at("imputer_output_6")[0], iTable.at("imputer_output_7")[0], iTable.at("imputer_output_8")[0], iTable.at("imputer_output_9")[0], iTable.at("imputer_output_10")[0], iTable.at("imputer_output_11")[0]);
	
			return lTable;
		}
	
	} // eof namespace scaler
	

	namespace model {
	
		std::vector<std::any> get_classes(){
			std::vector<std::any> lClasses = { 0, 1 };
	
			return lClasses;
		}
	
		std::vector<std::any> lProblem_data_dual = { 
		 -0.6449550957165304 , -1.0 , -1.0 , -1.0 , -0.5614640491687449 , -1.0 , -0.9941930232742301 , -1.0 , -1.0 , -0.19053744694905858 , -1.0 , -0.36462218112783523 , -1.0 , -0.8581943265343465 , -0.8943216018931861 , -0.4745933372196024 , -1.0 , -1.0 , -0.21899904764462574 , -1.0 , -1.0 , -0.7436618461472428 , -1.0 , -0.49895048987178253 , -1.0 , -0.2156311158265991 , 1.0 , 1.0 , 1.0 , 1.0 , 1.0 , 1.0 , 1.0 , 1.0 , 0.21330512736329563 , 0.8183073134085932 , 0.3463547639192771 , 0.8204534019496802 , 1.0 , 0.30902624351762487 , 1.0 , 0.06127391281991532 , 1.0 , 0.7158506763036945 , 0.8965191164846688 , 1.0 , 0.7883551162016813 , 0.9456410203183404 , 0.384277416051352 , 0.29264119333636257 , 0.638450238405017 , 1.0 , 0.42966802129428144 ,};
		
	
		std::vector<std::vector<std::any> > lProblem_data_sv = { 
		 { 1.12041156548379, 0.5171167602705458, 1.5439699887544067, 0.7654886661736935, -1.524949379568199, -0.5761937958336263, 0.3188583423616559, 1.0659046017998663, -1.058902764500607, -1.0104311226717706 },
		 { 1.6755678844336959, -1.5866303311006371, 0.5600356014929934, 0.4915335058440637, 0.38349421735881056, -1.8141534866469373, -0.13324822921795448, 1.452823106537375, 1.7733982689801724, -1.2655853197044382 },
		 { 0.3412109075882581, 1.861244182638373, 0.46295637462729033, 0.7247985545514732, 1.9425332463985066, -0.16103130060036325, -1.0032961574104244, 0.3267529393083514, 1.3740021819907098, -0.3114402792346285 },
		 { -0.2262874800843781, -0.7518383887828721, -0.5377114825101402, -0.8715936392729726, -0.8129208998395101, 1.1623246605419595, -0.6682307188109922, -0.06018586098747406, -1.6488255260390994, -0.06553135177181463 },
		 { 0.5471944167734375, 1.1799493795947327, 0.1361093946212456, 0.15383868469300854, -0.5366991777536146, -0.37572239930033613, 0.7637777713157753, 0.5065886940833276, 0.22268156631255032, -0.4691701323704692 },
		 { -0.0927747360333782, -0.03405189668360506, 0.4586514681836684, 1.2060408413504422, 0.7190356081570217, 1.0761044273374492, -0.16169625927089976, 0.06422802868511858, -0.7730178166581789, -0.18141243368019236 },
		 { 0.08070616633436524, 0.1514511442142756, 1.28515556478042, 0.8890857570813501, 0.24571833705487778, 1.223838683163338, -1.140943904783567, 0.26440405087058444, 0.5883480086301834, -0.39894100641416785 },
		 { -0.6689776681395252, 0.39941739083734373, -0.2571792868162356, -1.2979215144515341, 1.3662135125985067, 1.1554604771558676, 2.6909866359887236, -0.5161149811316904, 0.6340121556742192, 0.3941559383036558 },
		 { 0.5891735853340253, 0.9526974548471818, 0.08112958993880352, -0.6456948221580435, -1.281876178034183, -0.5729954971356158, 0.07706524365932575, 0.5204752542486365, 1.248656036807721, -0.46174387127544436 },
		 { 0.7834068311261477, -1.303697748720344, -0.2885024844724163, 1.475131142024615, 0.8990461226483143, 0.12996334868287296, -0.27872179388266427, 0.8243048000063509, -1.8620796329935712, -0.8438542427143298 },
		 { 0.877924339111812, 0.5305530179952413, -1.4099193292437011, 0.5576112873024616, 1.402334189824453, -1.0299238526983405, 0.9583778272378892, 0.7494444088794106, -0.18472007912343283, -0.6426485426474337 },
		 { 0.5545332080533678, -0.44250800056712297, -0.9267838211801835, 1.1123548071077702, 0.6462410111172768, 0.18743173847308767, -0.5477088129669442, 0.5976341519322539, -0.4165680637409086, -0.6219209092556941 },
		 { 0.3871162286961366, -0.23801973531257498, 0.2366213106992756, -2.803630160803415, 1.191141069832706, -0.5246035170829476, -1.2169720432605273, 0.32001533208160726, -0.23632530224200482, -0.2652096871373981 },
		 { 1.1469388869008093, 0.48264079401748655, -2.646361035735504, 0.973598886681535, 0.4028905867598586, 0.0028481812588325014, -0.4432131509670485, 1.179024154251703, -1.6663038853703689, -1.187125757819712 },
		 { 0.2813727235623661, 1.2722149446366666, -0.3430237474039699, -0.5803434738691453, 0.5246056917832819, 1.3644987532766129, -0.8588467758987737, 0.4914672731610403, 0.31611985117810315, -0.6427669198015342 },
		 { 1.1964165268729143, -1.3808881166096603, -1.0389648256443333, -1.7320516859630668, 2.748003201736826, -0.7106354266984642, -0.6378700081939286, 1.1240728893021357, -0.43800879921211483, -1.0543966260313828 },
		 { 0.4218202332215111, -0.4390374507048122, 0.366485163991133, 1.1200482166113581, -1.6461835050541598, 0.05022817973524025, -0.8425794856688906, 0.440912999884602, -1.3085990344289498, -0.44927702036508393 },
		 { -0.060028629154815, -1.1349985043580169, -0.5099175931370743, -0.3460174895073262, 0.18307005280858077, 1.0834531774590934, 0.4682414709491233, 0.09896780728108398, -1.216980616151226, -0.21717917615158083 },
		 { 0.8621461145401196, -0.3421826798279283, -1.807478216044399, -2.4991212151266384, -0.43187616159901365, -0.5182236648023827, 0.4439732328124855, 0.8091051188661192, -0.17961369213794715, -0.7582242628244037 },
		 { -0.7693896372895379, 0.34440654609078875, 0.1923099841275786, 0.6844774537134392, 1.852672959021776, 1.7626816212444087, 2.4897071206556025, -0.5292606802544281, -0.006868408783579396, 0.3415035775359892 },
		 { 0.5409200037488626, -0.3337155868307675, 1.7073343419953193, 1.2906761391434058, -0.36169679406454075, -0.6689172763354456, -0.20831824010297756, 0.45666635264333894, -0.13880962285206658, -0.3871054929573432 },
		 { 0.10153776337949867, 0.5578442140641966, -0.19899885742658244, -1.0719303123600283, -1.2216822584468687, 0.09734420862822078, 2.1308232793400004, 0.11877498865803038, 0.03474479767432919, -0.13012209180648887 },
		 { -0.3004330163888925, -0.27765341326849974, -0.16013232852076337, 0.39820597553365067, -1.0454399925043851, 0.9915538165828423, 1.2689880278933663, -0.16170006549647628, 1.1698395103399282, 0.0551828388157289 },
		 { 1.170849937530188, 0.5843333532911709, 0.9285187858362384, -0.8760110367047577, 0.7780592238741197, -1.3260694046748829, 0.9163470638415657, 1.0065444130637726, -0.4556252614319159, -0.869315308024707 },
		 { 1.3414207309364703, -2.0170653102301337, 0.42058735811610115, 0.4356880749346106, -0.024493685553011537, -1.552322360631559, 0.1824188633631091, 1.1482754483366708, -0.9743850095041908, -0.987434105565764 },
		 { 1.3666847649242637, -2.0700204028992424, -0.10801016928306885, -0.12453509284093582, -1.0597016227958291, -1.5478832996008758, 0.04711721636886123, 1.1748951538825292, 0.34508059701793464, -1.014711398464895 },
		 { 0.4797899856638262, -0.283140827084127, 1.8201910206010106, 0.4477612616310742, -0.1700936803095665, -1.488510524532206, -0.7348482775633208, 0.27232008497486215, -0.5175688324528581, -0.11261299377672843 },
		 { 0.08786168190825536, 0.4225727023115306, 0.08734267328222607, 1.0238593371579374, -0.6591157763297443, -0.68948849010222, 0.11673062548679242, -0.011949596994102614, -1.8601878261251854, 0.086839723685646 },
		 { 0.6540401371479553, -1.5162266409202294, 1.7958517463037313, -0.09949223368530669, -0.6253190991929047, -0.8393198316815396, 2.020714428917183, 0.547642172665861, 0.9483674951627784, -0.4601935187216024 },
		 { 0.03267981416396033, 1.0538942602743027, 1.0456844050102068, -1.3468045097961472, -0.6838217714677974, -1.134940635504217, -0.845285506301488, -0.13470614791084454, -1.5799483394430354, 0.25874023570953636 },
		 { 0.14172476720193772, -0.17158305301791102, -0.1758638044346375, -1.3199688014183233, -1.8639662306315696, 2.1768033546242793, -2.315610775048862, 0.46841203896536254, -1.4987402932746305, -0.7076962949091757 },
		 { 0.4343866706952755, 0.9492378944772654, 1.4844680876983811, 1.5660751326920754, 1.0073360478577547, -1.0507045571725846, -0.3616359192184754, 0.290580881235907, -0.8546329309952236, -0.178497474809226 },
		 { 0.6261140787260275, 0.1832347671370099, -0.48412578666837824, 0.8962696545332757, 0.407715732368945, -1.457540867756144, 0.38135869915542325, 0.4272758278602515, 1.120586436713441, -0.2719531732557108 },
		 { -0.5841456217618298, -0.39812015966145275, -0.39880940932928266, -0.007602293922001621, 0.827592390456679, 1.2567081319193358, -0.36904924464494215, -0.41392809542367653, -1.3454816323790464, 0.28030805259808733 },
		 { -0.10827512486888799, -1.2110980267559703, 1.0035456544078072, 0.5167224602549059, 1.1719588503772211, -1.0407178422838106, -1.5173727488511308, -0.26558107181535767, -0.05858411222352325, 0.380256758135746 },
		 { -0.09954374731611668, -0.30641458382064385, -0.018954808640995614, 0.5090993571989407, 1.8324941152461451, -1.0608914320155864, 0.14881034181751351, -0.25959997627907844, 0.19519313653216247, 0.3764250141808097 },
		 { -1.6510800750704286, -1.0633989024688952, 0.13729977350095113, 1.157156399026284, -2.2847570429225263, 0.35535686140023787, 1.0912572955103104, -1.6439685321522992, -0.9953949966026707, 1.6162770076770054 },
		 { -0.6784275144204127, 1.373275615567766, -1.9181664003266556, -0.5968860430557571, 1.0419111341028107, 1.1992646238286133, -0.8207778065599642, -0.5193304587263646, -0.24690119975187094, 0.392639813552325 },
		 { -0.6629414695953076, 1.281356387108932, -0.8279390259279739, -0.30713584219847534, -0.6676428129186932, 1.0872264326045709, -0.534449951635971, -0.520029836786576, 0.8685743489689621, 0.4055002253484424 },
		 { -0.9791689085229283, -0.5562996602729775, 0.6484960727403403, -0.38973405220847024, -1.5582146008164344, 1.3174117769559048, -0.4517151608521773, -0.8108554927442709, 1.314776081081343, 0.6732723867786758 },
		 { -0.9016982368933829, -0.06810561595446128, 0.398010696635967, -0.8256780299245522, 0.17604562344873267, 1.1063006950214826, 0.34005562506024056, -0.7625495199580522, -0.39681130378988316, 0.6475532000440688 },
		 { -0.9404255152479981, 0.8190429819282843, -0.8779771954355704, 0.9581035185537486, -0.3423822286077114, 0.7204163150257421, 0.4508277266027788, -0.859564565180365, -1.2261723883816165, 0.7870788272604287 },
		 { 0.821849213196117, -0.8622437900413957, -0.839886647537644, 1.5183657734749747, -0.08337053569433552, -1.2823569303281672, 1.8743511698652495, 0.6543906610466925, -0.09854050956908234, -0.5195769607041587 },
		 { -0.040511895919603594, 0.28418208581458765, -1.4068142374119657, 0.29754312574106323, -1.5116728486607989, -1.02448838758812, -0.5429946037460954, -0.1935406476599708, 1.435455661100924, 0.30597925987768143 },
		 { -0.14144070589193528, -3.327873773764086, -0.508496926483442, -0.23873342257316324, 1.539338794849393, -1.4110545127448177, -0.7317128164507386, -0.3545754782635465, -1.7764691341564471, 0.5100217718511395 },
		 { 0.6937771485761223, 0.45430361561875215, 0.21064105350805334, 1.0433901573232613, 0.03740459026006079, -1.036931473969185, 0.4302565519723686, 0.5591744785264072, -0.1039415499024544, -0.4503607103778977 },
		 { -0.648135226450511, -1.704481068021942, -0.7652762598491197, 1.2354645078360993, 0.1536981096213723, 1.0822402351628564, 0.8857076298279853, -0.5055541950160398, 1.0120573530947856, 0.39146992349937304 },
		 { 0.2812003983913316, 1.9872779676508556, -3.7541780933732216, 0.6557257799003048, 0.5410159536042183, 1.8997492897735913, 2.3042134751718173, 0.5706567342681115, 0.3538620586773582, -0.7805557322795593 },
		 { -0.8515880169543086, 1.8715398097687233, 1.731159058836162, 0.8265102476863448, 0.9708913715472081, 0.3459960029680656, -1.5970321135438057, -0.8237933364731713, -0.6571229830030352, 0.7916966724373024 },
		 { -0.9877038846032079, 0.1647151042408274, -0.40964062602399576, -1.979691530719945, -1.0131174670859466, -0.9369727098712723, -1.106577030247841, -1.153904511214936, 2.9385010265946403, 1.2631948327409968 },
		 { -0.8885433471329603, -1.2270298610063357, 1.5953519478000178, 0.7242623898151819, -0.02019600346792144, 0.9231050628128051, 0.457395100913295, -0.7761955794368778, 1.7547614244835674, 0.681166614532056 },
		 { 0.22373787920969282, -0.7816753739672916, -1.561197607479468, -0.5896890596297178, -0.1470691637205739, 2.142736815978169, 0.3084830333061339, 0.5476378834944492, 0.9413429637671645, -0.7837494690214598 },
		 { -3.0777239342908467, 0.46390107348545995, 0.475543494204929, 1.0377319316641274, -0.14941074993403938, -1.010599007504073, -0.49571384337516383, -3.3125399014304615, 1.6818669324525446, 3.444086002907526 },
		};
		
	
		double get_problem_0_1_decision_function( std::vector<std::any> const & inputs) {
			return rbf_kernel( lProblem_data_dual, lProblem_data_sv, inputs, 0.1 ) + 0.32717232678931774;
		}
		
	
		std::vector<std::string> get_input_names(){
			std::vector<std::string> lFeatures = { "scaler_output_2", "scaler_output_3", "scaler_output_4", "scaler_output_5", "scaler_output_6", "scaler_output_7", "scaler_output_8", "scaler_output_9", "scaler_output_10", "scaler_output_11" };
	
			return lFeatures;
		}
	
		std::vector<std::string> get_output_names(){
			std::vector<std::string> lOutputs = { 
				"Score_0", "Score_1",
				"Proba_0", "Proba_1",
				"LogProba_0", "LogProba_1",
				"Decision", "DecisionProba" };
	
			return lOutputs;
		}
	
		tTable compute_classification_scores(std::any scaler_output_2, std::any scaler_output_3, std::any scaler_output_4, std::any scaler_output_5, std::any scaler_output_6, std::any scaler_output_7, std::any scaler_output_8, std::any scaler_output_9, std::any scaler_output_10, std::any scaler_output_11) {
			auto lClasses = get_classes();
	
			std::vector<std::any> inputs = { scaler_output_2, scaler_output_3, scaler_output_4, scaler_output_5, scaler_output_6, scaler_output_7, scaler_output_8, scaler_output_9, scaler_output_10, scaler_output_11 };
	
			std::any lDotProduct_0_1 = rbf_kernel( lProblem_data_dual, lProblem_data_sv, inputs, 0.1 ) + 0.32717232678931774;
	
			std::any lLogistic_0_1 = logistic(-3.407659694917571 * lDotProduct_0_1 + 0.22089106749203483);
	
	
			tTable lTable;
	
			lTable["Score"] = { 
				-lDotProduct_0_1,
				lDotProduct_0_1 
			} ;
			lTable["Proba"] = { 
				lLogistic_0_1,
				1.0 - lLogistic_0_1 
			} ;
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
			"Score_0", "Score_1",
			"Proba_0", "Proba_1",
			"LogProba_0", "LogProba_1",
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
	score_csv_file("outputs/ml2cpp-demo/datasets/BinaryClass_10.csv");
	return 0;
}
