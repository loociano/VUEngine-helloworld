///////////////////////////////////////////////////////////////////////////////////////////////////////////
//                              THIS FILE WAS AUTO-GENERATED - DO NOT EDIT                               //
///////////////////////////////////////////////////////////////////////////////////////////////////////////

//---------------------------------------------------------------------------------------------------------
//                                                INCLUDES                                                 
//---------------------------------------------------------------------------------------------------------

#include <I18n.h>


//---------------------------------------------------------------------------------------------------------
//                                              DECLARATIONS                                               
//---------------------------------------------------------------------------------------------------------

extern EntitySpec FlagFranceEntity;


//---------------------------------------------------------------------------------------------------------
//                                               DEFINITIONS                                               
//---------------------------------------------------------------------------------------------------------

const char* const FrenchLanguageStrings[] =
{
	/* kStringAutomaticPauseBody: */
	"Se il vous pla�t, prendre un repos!",
	/* kStringAutomaticPauseSelectionBody: */
	"  La fonction Pause automatique va\nvous rappelerez de prendre une pause\n  de jeu chaque 30 minutes environ",
	/* kStringAutomaticPauseSelectionOff: */
	"Desactiv�",
	/* kStringAutomaticPauseSelectionOn: */
	"Activ�",
	/* kStringAutomaticPauseSelectionTitle: */
	"PAUSE AUTOMATIQUE",
	/* kStringAutomaticPauseTitle: */
	"PAUSE AUTOMATIQUE",
	/* kStringHelloWorld: */
	"Bonjour Le Monde!",
	/* kStringLanguageSelectTitle: */
	"CHOIX DE LA LANGUE",
	/* kStringPrecautionScreenBody: */
	"        IMPORTANT\nPRENEZ CONAISSANCE DE LA\nNOTICE ET DES PR�CAUTIONS\n    A AVANT DE JOUER",
};

const LangROMSpec FrenchLanguage =
{
	// language name
	"Fran�ais",

	// flag entity
	&FlagFranceEntity,
	
	// strings
	(const char**)FrenchLanguageStrings
};
