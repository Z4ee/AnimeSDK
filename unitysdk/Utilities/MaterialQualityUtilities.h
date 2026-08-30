#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Rendering/ShaderKeyword.h"
#include "unitysdk/Utilities/MaterialQuality.h"

namespace System { class String; }
namespace UnityEngine::Rendering { class CommandBuffer; }

#define UTILITIES_MATERIALQUALITYUTILITIES_FROMINDEX_OFFSET UNITYSDK_OFFSET(0x1EC1D510)
#define UTILITIES_MATERIALQUALITYUTILITIES_GETCLOSESTQUALITY_OFFSET UNITYSDK_OFFSET(0x1EC1D2A0)
#define UTILITIES_MATERIALQUALITYUTILITIES_GETHIGHESTQUALITY_OFFSET UNITYSDK_OFFSET(0x1EC1D200)
#define UTILITIES_MATERIALQUALITYUTILITIES_SETGLOBALSHADERKEYWORDS_1_OFFSET UNITYSDK_OFFSET(0x1EC1D650)
#define UTILITIES_MATERIALQUALITYUTILITIES_SETGLOBALSHADERKEYWORDS_OFFSET UNITYSDK_OFFSET(0x1EC1D520)
#define UTILITIES_MATERIALQUALITYUTILITIES_TOFIRSTINDEX_OFFSET UNITYSDK_OFFSET(0x1EC1D420)
#define UTILITIES_MATERIALQUALITYUTILITIES__CCTOR_OFFSET UNITYSDK_OFFSET(0x1EC1D7C0)

namespace Utilities
{
	inline static constexpr unsigned int MaterialQualityUtilities_TypeDefinitionIndex = 34774;

	class MaterialQualityUtilities : public ::System::Object
	{
	public:
		static ::Il2CppArray<::UnityEngine::Rendering::ShaderKeyword>** StaticGet_Keywords()
		{
			return (::Il2CppArray<::UnityEngine::Rendering::ShaderKeyword>**)Il2CppClass::FromTypeDefinitionIndex(MaterialQualityUtilities_TypeDefinitionIndex)->GetStaticField(0x61B10);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_KeywordNames()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(MaterialQualityUtilities_TypeDefinitionIndex)->GetStaticField(0x61B18);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_EnumNames()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(MaterialQualityUtilities_TypeDefinitionIndex)->GetStaticField(0x61B20);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UTILITIES_MATERIALQUALITYUTILITIES__CCTOR_OFFSET))();
		}

		static ::Utilities::MaterialQuality GetHighestQuality(::Utilities::MaterialQuality a1)
		{
			return ((::Utilities::MaterialQuality(*)(::Utilities::MaterialQuality))((::PBYTE)hIl2Cpp + UTILITIES_MATERIALQUALITYUTILITIES_GETHIGHESTQUALITY_OFFSET))(a1);
		}

		static ::Utilities::MaterialQuality GetClosestQuality(::Utilities::MaterialQuality a1, ::Utilities::MaterialQuality a2)
		{
			return ((::Utilities::MaterialQuality(*)(::Utilities::MaterialQuality, ::Utilities::MaterialQuality))((::PBYTE)hIl2Cpp + UTILITIES_MATERIALQUALITYUTILITIES_GETCLOSESTQUALITY_OFFSET))(a1, a2);
		}

		static ::System::Void SetGlobalShaderKeywords(::Utilities::MaterialQuality a1)
		{
			return ((::System::Void(*)(::Utilities::MaterialQuality))((::PBYTE)hIl2Cpp + UTILITIES_MATERIALQUALITYUTILITIES_SETGLOBALSHADERKEYWORDS_OFFSET))(a1);
		}

		static ::System::Void SetGlobalShaderKeywords_1(::Utilities::MaterialQuality a1, ::UnityEngine::Rendering::CommandBuffer* a2)
		{
			return ((::System::Void(*)(::Utilities::MaterialQuality, ::UnityEngine::Rendering::CommandBuffer*))((::PBYTE)hIl2Cpp + UTILITIES_MATERIALQUALITYUTILITIES_SETGLOBALSHADERKEYWORDS_1_OFFSET))(a1, a2);
		}

		static ::System::Int32 ToFirstIndex(::Utilities::MaterialQuality a1)
		{
			return ((::System::Int32(*)(::Utilities::MaterialQuality))((::PBYTE)hIl2Cpp + UTILITIES_MATERIALQUALITYUTILITIES_TOFIRSTINDEX_OFFSET))(a1);
		}

		static ::Utilities::MaterialQuality FromIndex(::System::Int32 a1)
		{
			return ((::Utilities::MaterialQuality(*)(::System::Int32))((::PBYTE)hIl2Cpp + UTILITIES_MATERIALQUALITYUTILITIES_FROMINDEX_OFFSET))(a1);
		}
	};
}
