#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/UI/Extension/UITextTagReplacer_Matched.h"

class Class_1_95E491FD617A3F68;
namespace System { class String; }
namespace System::Text { class StringBuilder; }
namespace UnityEngine::UI { class VertexHelper; }
namespace UnityEngine::UI::Extension { class ITermDataProvider; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define UNITYENGINE_UI_EXTENSION_TERMFEATURE_CONTAINSTERMTAGS_OFFSET UNITYSDK_OFFSET(0x1788AD30)
#define UNITYENGINE_UI_EXTENSION_TERMFEATURE_ENSUREMATCHERS_OFFSET UNITYSDK_OFFSET(0x1788AC10)
#define UNITYENGINE_UI_EXTENSION_TERMFEATURE_GETREQUIREDRICHTAGS_OFFSET UNITYSDK_OFFSET(0x1788B050)
#define UNITYENGINE_UI_EXTENSION_TERMFEATURE_GET_CONTENTACTIVE_OFFSET UNITYSDK_OFFSET(0x1788AE00)
#define UNITYENGINE_UI_EXTENSION_TERMFEATURE_GET_DATAPROVIDER_OFFSET UNITYSDK_OFFSET(0x1788AB50)
#define UNITYENGINE_UI_EXTENSION_TERMFEATURE_GET_ISACTIVATED_OFFSET UNITYSDK_OFFSET(0x1788ADF0)
#define UNITYENGINE_UI_EXTENSION_TERMFEATURE_GET_PREPROCESSORDER_OFFSET UNITYSDK_OFFSET(0x1788AE20)
#define UNITYENGINE_UI_EXTENSION_TERMFEATURE_ONACTIVATE_OFFSET UNITYSDK_OFFSET(0x1788AE80)
#define UNITYENGINE_UI_EXTENSION_TERMFEATURE_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x1788B160)
#define UNITYENGINE_UI_EXTENSION_TERMFEATURE_ONINIT_OFFSET UNITYSDK_OFFSET(0x1788AE30)
#define UNITYENGINE_UI_EXTENSION_TERMFEATURE_ONPOSTPOPULATEMESH_OFFSET UNITYSDK_OFFSET(0x1788B090)
#define UNITYENGINE_UI_EXTENSION_TERMFEATURE_ONPOSTREBUILDADJUSTEDTEXT_OFFSET UNITYSDK_OFFSET(0x1788B0E0)
#define UNITYENGINE_UI_EXTENSION_TERMFEATURE_ONPREPROCESSTEXT_OFFSET UNITYSDK_OFFSET(0x1788AEC0)
#define UNITYENGINE_UI_EXTENSION_TERMFEATURE_ONREFRESH_OFFSET UNITYSDK_OFFSET(0x1788B120)
#define UNITYENGINE_UI_EXTENSION_TERMFEATURE_REPLACETERM_OFFSET UNITYSDK_OFFSET(0x1788B1A0)
#define UNITYENGINE_UI_EXTENSION_TERMFEATURE_SET_CONTENTACTIVE_OFFSET UNITYSDK_OFFSET(0x1788AE10)
#define UNITYENGINE_UI_EXTENSION_TERMFEATURE_SET_DATAPROVIDER_OFFSET UNITYSDK_OFFSET(0x1788ABB0)
#define UNITYENGINE_UI_EXTENSION_TERMFEATURE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1788B780)
#define UNITYENGINE_UI_EXTENSION_TERMFEATURE__CTOR_OFFSET UNITYSDK_OFFSET(0x1788B770)

namespace UnityEngine::UI::Extension
{
	inline static constexpr unsigned int TermFeature_TypeDefinitionIndex = 40988;

	class TermFeature : public ::System::Object
	{
	public:
		static ::Class_1_95E491FD617A3F68** StaticGet__termMatchers()
		{
			return (::Class_1_95E491FD617A3F68**)Il2CppClass::FromTypeDefinitionIndex(TermFeature_TypeDefinitionIndex)->GetStaticField(0x30170);
		}
		static ::System::String** StaticGet__termPrefix()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(TermFeature_TypeDefinitionIndex)->GetStaticField(0x30178);
		}
		static ::UnityEngine::UI::Extension::ITermDataProvider** StaticGet__DataProvider_k__BackingField()
		{
			return (::UnityEngine::UI::Extension::ITermDataProvider**)Il2CppClass::FromTypeDefinitionIndex(TermFeature_TypeDefinitionIndex)->GetStaticField(0x30180);
		}
		::UnityEngine::UI::Extension::UILocalizationText* _host; // 0x10
		::System::Boolean _ContentActive_k__BackingField; // 0x18
		::System::Boolean _isActivated; // 0x19

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

		static ::Class_1_95E491FD617A3F68* EnsureMatchers()
		{
			return ((::Class_1_95E491FD617A3F68*(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_TERMFEATURE_ENSUREMATCHERS_OFFSET))();
		}

		static ::System::Boolean ContainsTermTags(::System::String* text)
		{
			return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_TERMFEATURE_CONTAINSTERMTAGS_OFFSET))(text);
		}

		::System::Boolean get_IsActivated()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_TERMFEATURE_GET_ISACTIVATED_OFFSET))(this);
		}

		::System::Boolean get_ContentActive()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_TERMFEATURE_GET_CONTENTACTIVE_OFFSET))(this);
		}

		::System::Void set_ContentActive(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_TERMFEATURE_SET_CONTENTACTIVE_OFFSET))(this, value);
		}

		::System::Int32 get_PreprocessOrder()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_TERMFEATURE_GET_PREPROCESSORDER_OFFSET))(this);
		}

		::System::Void OnInit(::UnityEngine::UI::Extension::UILocalizationText* host)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::Extension::UILocalizationText*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_TERMFEATURE_ONINIT_OFFSET))(this, host);
		}

		::System::Void OnActivate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_TERMFEATURE_ONACTIVATE_OFFSET))(this);
		}

		::System::String* OnPreprocessText(::System::String* rawText)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_TERMFEATURE_ONPREPROCESSTEXT_OFFSET))(this, rawText);
		}

		::System::UInt32 GetRequiredRichTags()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_TERMFEATURE_GETREQUIREDRICHTAGS_OFFSET))(this);
		}

		::System::Void OnPostPopulateMesh(::UnityEngine::UI::VertexHelper* toFill)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::VertexHelper*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_TERMFEATURE_ONPOSTPOPULATEMESH_OFFSET))(this, toFill);
		}

		::System::Boolean OnPostRebuildAdjustedText()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_TERMFEATURE_ONPOSTREBUILDADJUSTEDTEXT_OFFSET))(this);
		}

		::System::Void OnRefresh()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_TERMFEATURE_ONREFRESH_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_TERMFEATURE_ONDESTROY_OFFSET))(this);
		}

		static ::System::Void ReplaceTerm(::System::String* rawStr, ::UnityEngine::UI::Extension::UITextTagReplacer_Matched matched, ::System::Text::StringBuilder* sb)
		{
			return ((::System::Void(*)(::System::String*, ::UnityEngine::UI::Extension::UITextTagReplacer_Matched, ::System::Text::StringBuilder*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_TERMFEATURE_REPLACETERM_OFFSET))(rawStr, matched, sb);
		}
	};
}
