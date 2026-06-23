#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

class Class_2_A9A857AD270B9CE1;
namespace System { class String; }
namespace UnityEngine::UI { class Image; }

#define UNITYENGINE_UI_EXTENSION_UILOCALIZATIONIMAGE_AWAKE_OFFSET UNITYSDK_OFFSET(0x1AC7CF80)
#define UNITYENGINE_UI_EXTENSION_UILOCALIZATIONIMAGE_UPDATEIMAGE_1_OFFSET UNITYSDK_OFFSET(0x1AC7D0B0)
#define UNITYENGINE_UI_EXTENSION_UILOCALIZATIONIMAGE_UPDATEIMAGE_OFFSET UNITYSDK_OFFSET(0x1AC7D050)
#define UNITYENGINE_UI_EXTENSION_UILOCALIZATIONIMAGE__CTOR_OFFSET UNITYSDK_OFFSET(0x1AC7D350)

namespace UnityEngine::UI::Extension
{
	inline static constexpr unsigned int UILocalizationImage_TypeDefinitionIndex = 45652;

	class UILocalizationImage : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::String* key; // 0x18
		::UnityEngine::UI::Image* _curImage; // 0x20
		::Class_2_A9A857AD270B9CE1* _assetLoadProxy; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UILOCALIZATIONIMAGE__CTOR_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UILOCALIZATIONIMAGE_AWAKE_OFFSET))(this);
		}

		::System::Void UpdateImage(::Class_2_A9A857AD270B9CE1* proxy)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UILOCALIZATIONIMAGE_UPDATEIMAGE_OFFSET))(this, proxy);
		}

		::System::Void UpdateImage_1(::Class_2_A9A857AD270B9CE1* proxy, ::System::String* key)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UILOCALIZATIONIMAGE_UPDATEIMAGE_1_OFFSET))(this, proxy, key);
		}
	};
}
