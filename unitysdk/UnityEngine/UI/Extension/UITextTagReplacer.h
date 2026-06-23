#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/UI/Extension/UITextTagReplacer_Matched.h"

class Class_1_D79D852F682C7303;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine::UI::Extension { class UITextTagReplacer_MatchReplacer; }

#define UNITYENGINE_UI_EXTENSION_UITEXTTAGREPLACER_BUILDSINGLETAGMATCHER_OFFSET UNITYSDK_OFFSET(0x1BF5BDB0)
#define UNITYENGINE_UI_EXTENSION_UITEXTTAGREPLACER_REPLACE_OFFSET UNITYSDK_OFFSET(0x1BF5B680)

namespace UnityEngine::UI::Extension
{
	inline static constexpr unsigned int UITextTagReplacer_TypeDefinitionIndex = 86657;

	class UITextTagReplacer : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::List_1<::UnityEngine::UI::Extension::UITextTagReplacer_Matched>** StaticGet__matchBuffer()
		{
			return (::System::Collections::Generic::List_1<::UnityEngine::UI::Extension::UITextTagReplacer_Matched>**)Il2CppClass::FromTypeDefinitionIndex(UITextTagReplacer_TypeDefinitionIndex)->GetStaticField(0x0);
		}

		static ::System::String* Replace(::System::String* input, ::Class_1_D79D852F682C7303* matchers, ::UnityEngine::UI::Extension::UITextTagReplacer_MatchReplacer* replacer)
		{
			return ((::System::String*(*)(::System::String*, ::Class_1_D79D852F682C7303*, ::UnityEngine::UI::Extension::UITextTagReplacer_MatchReplacer*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UITEXTTAGREPLACER_REPLACE_OFFSET))(input, matchers, replacer);
		}

		static ::Class_1_D79D852F682C7303* BuildSingleTagMatcher(::System::UInt16 tokenId, ::System::String* prefix, ::System::Char wildcardEnd)
		{
			return ((::Class_1_D79D852F682C7303*(*)(::System::UInt16, ::System::String*, ::System::Char))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UITEXTTAGREPLACER_BUILDSINGLETAGMATCHER_OFFSET))(tokenId, prefix, wildcardEnd);
		}
	};
}
