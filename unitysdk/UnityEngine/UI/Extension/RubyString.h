#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/UI/Extension/RubyString_Pair.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define UNITYENGINE_UI_EXTENSION_RUBYSTRING_GET_BASESTRING_OFFSET UNITYSDK_OFFSET(0x143BC190)
#define UNITYENGINE_UI_EXTENSION_RUBYSTRING_GET_DATA_OFFSET UNITYSDK_OFFSET(0x143BC1A0)
#define UNITYENGINE_UI_EXTENSION_RUBYSTRING_GET_RAWSTRING_OFFSET UNITYSDK_OFFSET(0x143BC180)
#define UNITYENGINE_UI_EXTENSION_RUBYSTRING_PARSE_OFFSET UNITYSDK_OFFSET(0x143BBCC0)
#define UNITYENGINE_UI_EXTENSION_RUBYSTRING_TOSTRING_OFFSET UNITYSDK_OFFSET(0x143BC1B0)
#define UNITYENGINE_UI_EXTENSION_RUBYSTRING__CTOR_OFFSET UNITYSDK_OFFSET(0x143BC1F0)
#define UNITYENGINE_UI_EXTENSION_RUBYSTRING___BASE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x143BC250)

namespace UnityEngine::UI::Extension
{
	inline static constexpr unsigned int RubyString_TypeDefinitionIndex = 40566;

	class RubyString : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::UnityEngine::UI::Extension::RubyString_Pair>* data; // 0x10
		::System::String* baseString; // 0x18
		::System::String* rawString; // 0x20
		::System::Boolean Valid; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_RUBYSTRING__CTOR_OFFSET))(this);
		}

		::System::Void Parse(::System::String* str)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_RUBYSTRING_PARSE_OFFSET))(this, str);
		}

		::System::String* get_RawString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_RUBYSTRING_GET_RAWSTRING_OFFSET))(this);
		}

		::System::String* get_BaseString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_RUBYSTRING_GET_BASESTRING_OFFSET))(this);
		}

		::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::UI::Extension::RubyString_Pair>* get_Data()
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::UI::Extension::RubyString_Pair>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_RUBYSTRING_GET_DATA_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_RUBYSTRING_TOSTRING_OFFSET))(this);
		}

		::System::String* __base_ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_RUBYSTRING___BASE_TOSTRING_OFFSET))(this);
		}
	};
}
