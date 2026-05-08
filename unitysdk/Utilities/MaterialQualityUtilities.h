#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Rendering/ShaderKeyword.h"
#include "unitysdk/Utilities/MaterialQuality.h"

namespace System { class String; }
namespace UnityEngine::Rendering { class CommandBuffer; }

#define UTILITIES_MATERIALQUALITYUTILITIES_FROMINDEX_OFFSET UNITYSDK_OFFSET(0x191FA9D0)
#define UTILITIES_MATERIALQUALITYUTILITIES_GETCLOSESTQUALITY_OFFSET UNITYSDK_OFFSET(0x191FA6C0)
#define UTILITIES_MATERIALQUALITYUTILITIES_GETHIGHESTQUALITY_OFFSET UNITYSDK_OFFSET(0x191FA600)
#define UTILITIES_MATERIALQUALITYUTILITIES_SETGLOBALSHADERKEYWORDS_1_OFFSET UNITYSDK_OFFSET(0x191FABC0)
#define UTILITIES_MATERIALQUALITYUTILITIES_SETGLOBALSHADERKEYWORDS_OFFSET UNITYSDK_OFFSET(0x191FAA20)
#define UTILITIES_MATERIALQUALITYUTILITIES_TOFIRSTINDEX_OFFSET UNITYSDK_OFFSET(0x191FA8A0)
#define UTILITIES_MATERIALQUALITYUTILITIES__CCTOR_OFFSET UNITYSDK_OFFSET(0x191FAD80)

namespace Utilities
{
	inline static constexpr unsigned int MaterialQualityUtilities_TypeDefinitionIndex = 9499;

	class MaterialQualityUtilities : public ::System::Object
	{
	public:
		static ::Il2CppArray<::UnityEngine::Rendering::ShaderKeyword>** StaticGet_Keywords()
		{
			return (::Il2CppArray<::UnityEngine::Rendering::ShaderKeyword>**)Il2CppClass::FromTypeDefinitionIndex(MaterialQualityUtilities_TypeDefinitionIndex)->GetStaticField(0x8B50);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_EnumNames()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(MaterialQualityUtilities_TypeDefinitionIndex)->GetStaticField(0x8B58);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_KeywordNames()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(MaterialQualityUtilities_TypeDefinitionIndex)->GetStaticField(0x8B60);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UTILITIES_MATERIALQUALITYUTILITIES__CCTOR_OFFSET))();
		}

		static ::Utilities::MaterialQuality GetHighestQuality(::Utilities::MaterialQuality levels)
		{
			return ((::Utilities::MaterialQuality(*)(::Utilities::MaterialQuality))((::PBYTE)hIl2Cpp + UTILITIES_MATERIALQUALITYUTILITIES_GETHIGHESTQUALITY_OFFSET))(levels);
		}

		static ::Utilities::MaterialQuality GetClosestQuality(::Utilities::MaterialQuality availableLevels, ::Utilities::MaterialQuality requestedLevel)
		{
			return ((::Utilities::MaterialQuality(*)(::Utilities::MaterialQuality, ::Utilities::MaterialQuality))((::PBYTE)hIl2Cpp + UTILITIES_MATERIALQUALITYUTILITIES_GETCLOSESTQUALITY_OFFSET))(availableLevels, requestedLevel);
		}

		static ::System::Void SetGlobalShaderKeywords(::Utilities::MaterialQuality level)
		{
			return ((::System::Void(*)(::Utilities::MaterialQuality))((::PBYTE)hIl2Cpp + UTILITIES_MATERIALQUALITYUTILITIES_SETGLOBALSHADERKEYWORDS_OFFSET))(level);
		}

		static ::System::Void SetGlobalShaderKeywords_1(::Utilities::MaterialQuality level, ::UnityEngine::Rendering::CommandBuffer* cmd)
		{
			return ((::System::Void(*)(::Utilities::MaterialQuality, ::UnityEngine::Rendering::CommandBuffer*))((::PBYTE)hIl2Cpp + UTILITIES_MATERIALQUALITYUTILITIES_SETGLOBALSHADERKEYWORDS_1_OFFSET))(level, cmd);
		}

		static ::System::Int32 ToFirstIndex(::Utilities::MaterialQuality level)
		{
			return ((::System::Int32(*)(::Utilities::MaterialQuality))((::PBYTE)hIl2Cpp + UTILITIES_MATERIALQUALITYUTILITIES_TOFIRSTINDEX_OFFSET))(level);
		}

		static ::Utilities::MaterialQuality FromIndex(::System::Int32 index)
		{
			return ((::Utilities::MaterialQuality(*)(::System::Int32))((::PBYTE)hIl2Cpp + UTILITIES_MATERIALQUALITYUTILITIES_FROMINDEX_OFFSET))(index);
		}
	};
}
