#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/UI/Extension/UITextFeatureBase.h"
#include "unitysdk/UnityEngine/UI/Extension/UITextTagReplacer_Matched.h"

class Class_1_D79D852F682C7303;
namespace System { class String; }
namespace System::Text { class StringBuilder; }
namespace UnityEngine::UI::Extension { class ITermDataProvider; }

#define UNITYENGINE_UI_EXTENSION_TERMFEATURE_CONTAINSTERMTAGS_OFFSET UNITYSDK_OFFSET(0x19E3DA80)
#define UNITYENGINE_UI_EXTENSION_TERMFEATURE_DETECTSCONTENT_OFFSET UNITYSDK_OFFSET(0x19E3DB50)
#define UNITYENGINE_UI_EXTENSION_TERMFEATURE_ENSUREMATCHERS_OFFSET UNITYSDK_OFFSET(0x19E3D960)
#define UNITYENGINE_UI_EXTENSION_TERMFEATURE_GET_DATAPROVIDER_OFFSET UNITYSDK_OFFSET(0x19E3D8A0)
#define UNITYENGINE_UI_EXTENSION_TERMFEATURE_GET_PREPROCESSORDER_OFFSET UNITYSDK_OFFSET(0x19E3DB40)
#define UNITYENGINE_UI_EXTENSION_TERMFEATURE_PREPROCESS_OFFSET UNITYSDK_OFFSET(0x19E3DBE0)
#define UNITYENGINE_UI_EXTENSION_TERMFEATURE_REPLACETERM_OFFSET UNITYSDK_OFFSET(0x19E3DF30)
#define UNITYENGINE_UI_EXTENSION_TERMFEATURE_SET_DATAPROVIDER_OFFSET UNITYSDK_OFFSET(0x19E3D900)
#define UNITYENGINE_UI_EXTENSION_TERMFEATURE__CCTOR_OFFSET UNITYSDK_OFFSET(0x19E3E640)
#define UNITYENGINE_UI_EXTENSION_TERMFEATURE__CTOR_OFFSET UNITYSDK_OFFSET(0x19E3E620)

namespace UnityEngine::UI::Extension
{
	inline static constexpr unsigned int TermFeature_TypeDefinitionIndex = 66708;

	class TermFeature : public ::UnityEngine::UI::Extension::UITextFeatureBase
	{
	public:
		static ::Class_1_D79D852F682C7303** StaticGet__termMatchers()
		{
			return (::Class_1_D79D852F682C7303**)Il2CppClass::FromTypeDefinitionIndex(TermFeature_TypeDefinitionIndex)->GetStaticField(0x35540);
		}
		static ::System::String** StaticGet__termPrefix()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(TermFeature_TypeDefinitionIndex)->GetStaticField(0x35548);
		}
		static ::UnityEngine::UI::Extension::ITermDataProvider** StaticGet__DataProvider_k__BackingField()
		{
			return (::UnityEngine::UI::Extension::ITermDataProvider**)Il2CppClass::FromTypeDefinitionIndex(TermFeature_TypeDefinitionIndex)->GetStaticField(0x35550);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_TERMFEATURE__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_TERMFEATURE__CCTOR_OFFSET))();
		}

		static ::UnityEngine::UI::Extension::ITermDataProvider* get_DataProvider()
		{
			return ((::UnityEngine::UI::Extension::ITermDataProvider*(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_TERMFEATURE_GET_DATAPROVIDER_OFFSET))();
		}

		static ::System::Void set_DataProvider(::UnityEngine::UI::Extension::ITermDataProvider* value)
		{
			return ((::System::Void(*)(::UnityEngine::UI::Extension::ITermDataProvider*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_TERMFEATURE_SET_DATAPROVIDER_OFFSET))(value);
		}

		static ::Class_1_D79D852F682C7303* EnsureMatchers()
		{
			return ((::Class_1_D79D852F682C7303*(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_TERMFEATURE_ENSUREMATCHERS_OFFSET))();
		}

		static ::System::Boolean ContainsTermTags(::System::String* text)
		{
			return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_TERMFEATURE_CONTAINSTERMTAGS_OFFSET))(text);
		}

		::System::Int32 get_PreprocessOrder()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_TERMFEATURE_GET_PREPROCESSORDER_OFFSET))(this);
		}

		::System::Boolean DetectsContent(::System::String* rawText)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_TERMFEATURE_DETECTSCONTENT_OFFSET))(this, rawText);
		}

		::System::String* Preprocess(::System::String* rawText)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_TERMFEATURE_PREPROCESS_OFFSET))(this, rawText);
		}

		static ::System::Void ReplaceTerm(::System::String* rawStr, ::UnityEngine::UI::Extension::UITextTagReplacer_Matched matched, ::System::Text::StringBuilder* sb)
		{
			return ((::System::Void(*)(::System::String*, ::UnityEngine::UI::Extension::UITextTagReplacer_Matched, ::System::Text::StringBuilder*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_TERMFEATURE_REPLACETERM_OFFSET))(rawStr, matched, sb);
		}
	};
}
