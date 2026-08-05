#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/KeyCode.h"

namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class Event; }

#define ZENFULCRUM_EMBEDDEDBROWSER_KEYMAPPINGS_GETUNITYKEYCODE_OFFSET UNITYSDK_OFFSET(0x1F8D63E0)
#define ZENFULCRUM_EMBEDDEDBROWSER_KEYMAPPINGS_GETWINDOWSKEYCODE_OFFSET UNITYSDK_OFFSET(0x1F8D6270)
#define ZENFULCRUM_EMBEDDEDBROWSER_KEYMAPPINGS__CCTOR_OFFSET UNITYSDK_OFFSET(0x1F8D4770)

namespace ZenFulcrum::EmbeddedBrowser
{
	inline static constexpr unsigned int KeyMappings_TypeDefinitionIndex = 33327;

	class KeyMappings : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::UnityEngine::KeyCode, ::System::Int32>** StaticGet_mappings()
		{
			return (::System::Collections::Generic::Dictionary_2<::UnityEngine::KeyCode, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(KeyMappings_TypeDefinitionIndex)->GetStaticField(0x288A0);
		}
		static ::System::Collections::Generic::Dictionary_2<::System::Int32, ::UnityEngine::KeyCode>** StaticGet_reverseMappings()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::Int32, ::UnityEngine::KeyCode>**)Il2CppClass::FromTypeDefinitionIndex(KeyMappings_TypeDefinitionIndex)->GetStaticField(0x288A8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_KEYMAPPINGS__CCTOR_OFFSET))();
		}

		static ::System::Int32 GetWindowsKeyCode(::UnityEngine::Event* ev)
		{
			return ((::System::Int32(*)(::UnityEngine::Event*))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_KEYMAPPINGS_GETWINDOWSKEYCODE_OFFSET))(ev);
		}

		static ::UnityEngine::KeyCode GetUnityKeyCode(::System::Int32 windowsKeyCode)
		{
			return ((::UnityEngine::KeyCode(*)(::System::Int32))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_KEYMAPPINGS_GETUNITYKEYCODE_OFFSET))(windowsKeyCode);
		}
	};
}
