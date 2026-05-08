#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/UI/BaseMeshEffect.h"

namespace UnityEngine::UI { class VertexHelper; }

#define UNITYENGINE_UI_EXTENSION_UITIMEARROW_CANVASADDITIONALCHANNEL_OFFSET UNITYSDK_OFFSET(0x12AA7B30)
#define UNITYENGINE_UI_EXTENSION_UITIMEARROW_MODIFYMESH_OFFSET UNITYSDK_OFFSET(0x12AA7D70)
#define UNITYENGINE_UI_EXTENSION_UITIMEARROW_START_OFFSET UNITYSDK_OFFSET(0x12AA7BC0)
#define UNITYENGINE_UI_EXTENSION_UITIMEARROW_UPDATE_OFFSET UNITYSDK_OFFSET(0x12AA7C40)
#define UNITYENGINE_UI_EXTENSION_UITIMEARROW__CTOR_OFFSET UNITYSDK_OFFSET(0x12AA7A90)
#define UNITYENGINE_UI_EXTENSION_UITIMEARROW___BASE_START_OFFSET UNITYSDK_OFFSET(0x12AA8030)

namespace UnityEngine::UI::Extension
{
	inline static constexpr unsigned int UITimeArrow_TypeDefinitionIndex = 48121;

	class UITimeArrow : public ::UnityEngine::UI::BaseMeshEffect
	{
	public:
		::UnityEngine::Quaternion _lastRotation; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UITIMEARROW__CTOR_OFFSET))(this);
		}

		::System::Void CanvasAdditionalChannel()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UITIMEARROW_CANVASADDITIONALCHANNEL_OFFSET))(this);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UITIMEARROW_START_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UITIMEARROW_UPDATE_OFFSET))(this);
		}

		::System::Void ModifyMesh(::UnityEngine::UI::VertexHelper* vh)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::VertexHelper*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UITIMEARROW_MODIFYMESH_OFFSET))(this, vh);
		}

		::System::Void __base_Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UITIMEARROW___BASE_START_OFFSET))(this);
		}
	};
}
