#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace IniParserEx { class IniFile_Section; }
namespace System { class String; }

#define UNITYENGINE_DEFAULTCONSOLECONFIGREADER_CONDITIONDETAIL_GETPLATFORMNAME_OFFSET UNITYSDK_OFFSET(0x1B290D40)
#define UNITYENGINE_DEFAULTCONSOLECONFIGREADER_CONDITIONDETAIL_MATCHCLOUDPLATFORM_OFFSET UNITYSDK_OFFSET(0x1B28B3E0)
#define UNITYENGINE_DEFAULTCONSOLECONFIGREADER_CONDITIONDETAIL_MATCHCONDITION_OFFSET UNITYSDK_OFFSET(0x1B28B7B0)
#define UNITYENGINE_DEFAULTCONSOLECONFIGREADER_CONDITIONDETAIL_MATCHEDITOR_OFFSET UNITYSDK_OFFSET(0x1B28B090)
#define UNITYENGINE_DEFAULTCONSOLECONFIGREADER_CONDITIONDETAIL_MATCHMODELNAMEREGEX_OFFSET UNITYSDK_OFFSET(0x1B28C6B0)
#define UNITYENGINE_DEFAULTCONSOLECONFIGREADER_CONDITIONDETAIL_USEFORCURRENTPLATFORM_OFFSET UNITYSDK_OFFSET(0x1B28ACC0)

namespace UnityEngine
{
	inline static constexpr unsigned int DefaultConsoleConfigReader_ConditionDetail_TypeDefinitionIndex = 4053;

	class DefaultConsoleConfigReader_ConditionDetail : public ::System::Object
	{
	public:
		static ::System::String* GetPlatformName()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_DEFAULTCONSOLECONFIGREADER_CONDITIONDETAIL_GETPLATFORMNAME_OFFSET))();
		}

		static ::System::Boolean UseForCurrentPlatform(::IniParserEx::IniFile_Section* a1, ::System::String* a2)
		{
			return ((::System::Boolean(*)(::IniParserEx::IniFile_Section*, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_DEFAULTCONSOLECONFIGREADER_CONDITIONDETAIL_USEFORCURRENTPLATFORM_OFFSET))(a1, a2);
		}

		static ::System::Boolean MatchEditor(::IniParserEx::IniFile_Section* a1, ::System::String* a2)
		{
			return ((::System::Boolean(*)(::IniParserEx::IniFile_Section*, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_DEFAULTCONSOLECONFIGREADER_CONDITIONDETAIL_MATCHEDITOR_OFFSET))(a1, a2);
		}

		static ::System::Boolean MatchCloudPlatform(::IniParserEx::IniFile_Section* a1, ::System::String* a2)
		{
			return ((::System::Boolean(*)(::IniParserEx::IniFile_Section*, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_DEFAULTCONSOLECONFIGREADER_CONDITIONDETAIL_MATCHCLOUDPLATFORM_OFFSET))(a1, a2);
		}

		static ::System::Boolean MatchCondition(::IniParserEx::IniFile_Section* a1, ::System::String* a2)
		{
			return ((::System::Boolean(*)(::IniParserEx::IniFile_Section*, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_DEFAULTCONSOLECONFIGREADER_CONDITIONDETAIL_MATCHCONDITION_OFFSET))(a1, a2);
		}

		static ::System::Boolean MatchModelNameRegEx(::IniParserEx::IniFile_Section* a1, ::System::String* a2)
		{
			return ((::System::Boolean(*)(::IniParserEx::IniFile_Section*, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_DEFAULTCONSOLECONFIGREADER_CONDITIONDETAIL_MATCHMODELNAMEREGEX_OFFSET))(a1, a2);
		}
	};
}
