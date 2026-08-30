#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace IniParserEx { class IniFile_SectionItem; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define UNITYENGINE_DEFAULTCONSOLECONFIGREADER_CONDITIONDETAIL___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1DED6260)
#define UNITYENGINE_DEFAULTCONSOLECONFIGREADER_CONDITIONDETAIL___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1DED62A0)
#define UNITYENGINE_DEFAULTCONSOLECONFIGREADER_CONDITIONDETAIL___C__MATCHMODELNAMEREGEX_B__5_0_OFFSET UNITYSDK_OFFSET(0x1DED6450)
#define UNITYENGINE_DEFAULTCONSOLECONFIGREADER_CONDITIONDETAIL___C__USEFORCURRENTPLATFORM_B__1_0_OFFSET UNITYSDK_OFFSET(0x1DED62B0)

namespace UnityEngine
{
	inline static constexpr unsigned int DefaultConsoleConfigReader_ConditionDetail___c_TypeDefinitionIndex = 4067;

	class DefaultConsoleConfigReader_ConditionDetail___c : public ::System::Object
	{
	public:
		static ::UnityEngine::DefaultConsoleConfigReader_ConditionDetail___c** StaticGet___9()
		{
			return (::UnityEngine::DefaultConsoleConfigReader_ConditionDetail___c**)Il2CppClass::FromTypeDefinitionIndex(DefaultConsoleConfigReader_ConditionDetail___c_TypeDefinitionIndex)->GetStaticField(0xF980);
		}
		static ::System::Func_2<::IniParserEx::IniFile_SectionItem*, ::System::Boolean>** StaticGet___9__1_0()
		{
			return (::System::Func_2<::IniParserEx::IniFile_SectionItem*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(DefaultConsoleConfigReader_ConditionDetail___c_TypeDefinitionIndex)->GetStaticField(0xF988);
		}
		static ::System::Func_2<::IniParserEx::IniFile_SectionItem*, ::System::Boolean>** StaticGet___9__5_0()
		{
			return (::System::Func_2<::IniParserEx::IniFile_SectionItem*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(DefaultConsoleConfigReader_ConditionDetail___c_TypeDefinitionIndex)->GetStaticField(0xF990);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_DEFAULTCONSOLECONFIGREADER_CONDITIONDETAIL___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_DEFAULTCONSOLECONFIGREADER_CONDITIONDETAIL___C__CTOR_OFFSET))(this);
		}

		::System::Boolean _UseForCurrentPlatform_b__1_0(::IniParserEx::IniFile_SectionItem* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::IniParserEx::IniFile_SectionItem*))((::PBYTE)hIl2Cpp + UNITYENGINE_DEFAULTCONSOLECONFIGREADER_CONDITIONDETAIL___C__USEFORCURRENTPLATFORM_B__1_0_OFFSET))(this, a1);
		}

		::System::Boolean _MatchModelNameRegEx_b__5_0(::IniParserEx::IniFile_SectionItem* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::IniParserEx::IniFile_SectionItem*))((::PBYTE)hIl2Cpp + UNITYENGINE_DEFAULTCONSOLECONFIGREADER_CONDITIONDETAIL___C__MATCHMODELNAMEREGEX_B__5_0_OFFSET))(this, a1);
		}
	};
}
