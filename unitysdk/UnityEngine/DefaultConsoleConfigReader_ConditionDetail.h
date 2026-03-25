#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace IniParserEx { class IniFile_Section; }
namespace System { class String; }

#define UNITYENGINE_DEFAULTCONSOLECONFIGREADER_CONDITIONDETAIL_GETPLATFORMNAME_OFFSET UNITYSDK_OFFSET(0x18A05ED0)
#define UNITYENGINE_DEFAULTCONSOLECONFIGREADER_CONDITIONDETAIL_MATCHCLOUDPLATFORM_OFFSET UNITYSDK_OFFSET(0x18A00030)
#define UNITYENGINE_DEFAULTCONSOLECONFIGREADER_CONDITIONDETAIL_MATCHCONDITION_OFFSET UNITYSDK_OFFSET(0x18A00400)
#define UNITYENGINE_DEFAULTCONSOLECONFIGREADER_CONDITIONDETAIL_MATCHEDITOR_OFFSET UNITYSDK_OFFSET(0x189FFD00)
#define UNITYENGINE_DEFAULTCONSOLECONFIGREADER_CONDITIONDETAIL_MATCHMODELNAMEREGEX_OFFSET UNITYSDK_OFFSET(0x18A01330)
#define UNITYENGINE_DEFAULTCONSOLECONFIGREADER_CONDITIONDETAIL_USEFORCURRENTPLATFORM_OFFSET UNITYSDK_OFFSET(0x189FF970)

namespace UnityEngine
{
	inline static constexpr unsigned int DefaultConsoleConfigReader_ConditionDetail_TypeDefinitionIndex = 3877;

	class DefaultConsoleConfigReader_ConditionDetail : public ::System::Object
	{
	public:
		static ::System::String* GetPlatformName()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_DEFAULTCONSOLECONFIGREADER_CONDITIONDETAIL_GETPLATFORMNAME_OFFSET))();
		}

		static ::System::Boolean UseForCurrentPlatform(::IniParserEx::IniFile_Section* section, ::System::String* iniPath)
		{
			return ((::System::Boolean(*)(::IniParserEx::IniFile_Section*, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_DEFAULTCONSOLECONFIGREADER_CONDITIONDETAIL_USEFORCURRENTPLATFORM_OFFSET))(section, iniPath);
		}

		static ::System::Boolean MatchEditor(::IniParserEx::IniFile_Section* section, ::System::String* iniPath)
		{
			return ((::System::Boolean(*)(::IniParserEx::IniFile_Section*, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_DEFAULTCONSOLECONFIGREADER_CONDITIONDETAIL_MATCHEDITOR_OFFSET))(section, iniPath);
		}

		static ::System::Boolean MatchCloudPlatform(::IniParserEx::IniFile_Section* section, ::System::String* iniPath)
		{
			return ((::System::Boolean(*)(::IniParserEx::IniFile_Section*, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_DEFAULTCONSOLECONFIGREADER_CONDITIONDETAIL_MATCHCLOUDPLATFORM_OFFSET))(section, iniPath);
		}

		static ::System::Boolean MatchCondition(::IniParserEx::IniFile_Section* section, ::System::String* iniPath)
		{
			return ((::System::Boolean(*)(::IniParserEx::IniFile_Section*, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_DEFAULTCONSOLECONFIGREADER_CONDITIONDETAIL_MATCHCONDITION_OFFSET))(section, iniPath);
		}

		static ::System::Boolean MatchModelNameRegEx(::IniParserEx::IniFile_Section* section, ::System::String* iniPath)
		{
			return ((::System::Boolean(*)(::IniParserEx::IniFile_Section*, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_DEFAULTCONSOLECONFIGREADER_CONDITIONDETAIL_MATCHMODELNAMEREGEX_OFFSET))(section, iniPath);
		}
	};
}
