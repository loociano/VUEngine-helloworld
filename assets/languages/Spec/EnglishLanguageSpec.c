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

extern EntitySpec FlagUnitedKingdomEntity;


//---------------------------------------------------------------------------------------------------------
//                                               DEFINITIONS                                               
//---------------------------------------------------------------------------------------------------------

const char* const EnglishLanguageStrings[] =
{
	/* kStringAutomaticPauseBody: */
	"Please take a rest!",
	/* kStringAutomaticPauseSelectionBody: */
	"The Automatic Pause feature will\nremind you to take a break from\nplaying approx. every 30 minutes",
	/* kStringAutomaticPauseSelectionOff: */
	"Off",
	/* kStringAutomaticPauseSelectionOn: */
	"On",
	/* kStringAutomaticPauseSelectionTitle: */
	"AUTOMATIC PAUSE",
	/* kStringAutomaticPauseTitle: */
	"AUTOMATIC PAUSE",
	/* kStringHelloWorld: */
	"Hello, World!",
	/* kStringLanguageSelectTitle: */
	"LANGUAGE SELECT",
	/* kStringPrecautionScreenBody: */
	"     IMPORTANT\nREAD INSTRUCTION AND\nPRECAUTION BOOKLETS\n  BEFORE OPERATING",
};

const LangROMSpec EnglishLanguage =
{
	// language name
	"English",

	// flag entity
	&FlagUnitedKingdomEntity,
	
	// strings
	(const char**)EnglishLanguageStrings
};
