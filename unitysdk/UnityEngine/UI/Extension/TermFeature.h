#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/UI/Extension/TermFeature_TermTagMatched.h"
#include "unitysdk/UnityEngine/UI/Extension/UITextFeatureBase.h"

class Class_1_912E0458D58825D3;
class Class_1_912E0458D58825D3_Class_3_E5F5430D92070BCB;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Text { class StringBuilder; }
namespace UnityEngine::UI::Extension { class ITermDataProvider; }

#define UNITYENGINE_UI_EXTENSION_TERMFEATURE_APPENDTERMREPLACEMENT_OFFSET UNITYSDK_OFFSET(0x1F1D2620)
#define UNITYENGINE_UI_EXTENSION_TERMFEATURE_COLLECTTERMMATCHES_OFFSET UNITYSDK_OFFSET(0x1F1D2D70)
#define UNITYENGINE_UI_EXTENSION_TERMFEATURE_COLLECTTERMMATCHTOKEN_OFFSET UNITYSDK_OFFSET(0x1F1D30B0)
#define UNITYENGINE_UI_EXTENSION_TERMFEATURE_CONTAINSTERMTAGS_OFFSET UNITYSDK_OFFSET(0x1F1D1C70)
#define UNITYENGINE_UI_EXTENSION_TERMFEATURE_DETECTSCONTENT_OFFSET UNITYSDK_OFFSET(0x1F1D1D40)
#define UNITYENGINE_UI_EXTENSION_TERMFEATURE_ENSUREMATCHERS_OFFSET UNITYSDK_OFFSET(0x1F1D1B50)
#define UNITYENGINE_UI_EXTENSION_TERMFEATURE_FINDPAIREDRIGHTINDEX_OFFSET UNITYSDK_OFFSET(0x1F1D3000)
#define UNITYENGINE_UI_EXTENSION_TERMFEATURE_GET_DATAPROVIDER_OFFSET UNITYSDK_OFFSET(0x1F1D1A90)
#define UNITYENGINE_UI_EXTENSION_TERMFEATURE_GET_PREPROCESSORDER_OFFSET UNITYSDK_OFFSET(0x1F1D1D30)
#define UNITYENGINE_UI_EXTENSION_TERMFEATURE_PREPROCESS_OFFSET UNITYSDK_OFFSET(0x1F1D1DD0)
#define UNITYENGINE_UI_EXTENSION_TERMFEATURE_REPLACETERMS_OFFSET UNITYSDK_OFFSET(0x1F1D2230)
#define UNITYENGINE_UI_EXTENSION_TERMFEATURE_SET_DATAPROVIDER_OFFSET UNITYSDK_OFFSET(0x1F1D1AF0)
#define UNITYENGINE_UI_EXTENSION_TERMFEATURE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1F1D32C0)
#define UNITYENGINE_UI_EXTENSION_TERMFEATURE__CTOR_OFFSET UNITYSDK_OFFSET(0x1F1D32A0)

namespace UnityEngine::UI::Extension
{
	inline static constexpr unsigned int TermFeature_TypeDefinitionIndex = 76529;

	class TermFeature : public ::UnityEngine::UI::Extension::UITextFeatureBase
	{
	public:
		static ::System::String** StaticGet__termPrefix()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(TermFeature_TypeDefinitionIndex)->GetStaticField(0x38240);
		}
		static ::Class_1_912E0458D58825D3** StaticGet__termMatchers()
		{
			return (::Class_1_912E0458D58825D3**)Il2CppClass::FromTypeDefinitionIndex(TermFeature_TypeDefinitionIndex)->GetStaticField(0x38248);
		}
		static ::Class_1_912E0458D58825D3_Class_3_E5F5430D92070BCB** StaticGet__collectTermMatchToken()
		{
			return (::Class_1_912E0458D58825D3_Class_3_E5F5430D92070BCB**)Il2CppClass::FromTypeDefinitionIndex(TermFeature_TypeDefinitionIndex)->GetStaticField(0x38250);
		}
		static ::System::String** StaticGet__termRightTag()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(TermFeature_TypeDefinitionIndex)->GetStaticField(0x38258);
		}
		static ::UnityEngine::UI::Extension::ITermDataProvider** StaticGet__DataProvider_k__BackingField()
		{
			return (::UnityEngine::UI::Extension::ITermDataProvider**)Il2CppClass::FromTypeDefinitionIndex(TermFeature_TypeDefinitionIndex)->GetStaticField(0x38260);
		}
		static ::System::Collections::Generic::List_1<::UnityEngine::UI::Extension::TermFeature_TermTagMatched>** StaticGet__termMatchBuffer()
		{
			return (::System::Collections::Generic::List_1<::UnityEngine::UI::Extension::TermFeature_TermTagMatched>**)Il2CppClass::FromTypeDefinitionIndex(TermFeature_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		// static const ::System::UInt16 _termLeftToken = 0x0; // 0x0
		// static const ::System::UInt16 _termRightToken = 0x1; // 0x0

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

		static ::Class_1_912E0458D58825D3* EnsureMatchers()
		{
			return ((::Class_1_912E0458D58825D3*(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_TERMFEATURE_ENSUREMATCHERS_OFFSET))();
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

		static ::System::Void AppendTermReplacement(::System::String* rawStr, ::System::Int32 fallbackStart, ::System::Int32 fallbackLength, ::System::Int32 id, ::System::Int32 overrideStart, ::System::Int32 overrideLength, ::System::Boolean termInteractionEnabled, ::System::Text::StringBuilder* sb)
		{
			return ((::System::Void(*)(::System::String*, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Boolean, ::System::Text::StringBuilder*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_TERMFEATURE_APPENDTERMREPLACEMENT_OFFSET))(rawStr, fallbackStart, fallbackLength, id, overrideStart, overrideLength, termInteractionEnabled, sb);
		}

		static ::System::String* ReplaceTerms(::System::String* rawText, ::System::Boolean termInteractionEnabled)
		{
			return ((::System::String*(*)(::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_TERMFEATURE_REPLACETERMS_OFFSET))(rawText, termInteractionEnabled);
		}

		static ::System::Collections::Generic::List_1<::UnityEngine::UI::Extension::TermFeature_TermTagMatched>* CollectTermMatches(::System::String* rawText)
		{
			return ((::System::Collections::Generic::List_1<::UnityEngine::UI::Extension::TermFeature_TermTagMatched>*(*)(::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_TERMFEATURE_COLLECTTERMMATCHES_OFFSET))(rawText);
		}

		static ::System::Void CollectTermMatchToken(::System::UInt16 token, ::System::UInt16 start, ::System::UInt16 end)
		{
			return ((::System::Void(*)(::System::UInt16, ::System::UInt16, ::System::UInt16))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_TERMFEATURE_COLLECTTERMMATCHTOKEN_OFFSET))(token, start, end);
		}

		static ::System::Int32 FindPairedRightIndex(::System::Collections::Generic::List_1<::UnityEngine::UI::Extension::TermFeature_TermTagMatched>* matches, ::System::Int32 startIndex)
		{
			return ((::System::Int32(*)(::System::Collections::Generic::List_1<::UnityEngine::UI::Extension::TermFeature_TermTagMatched>*, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_TERMFEATURE_FINDPAIREDRIGHTINDEX_OFFSET))(matches, startIndex);
		}
	};
}
