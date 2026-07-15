#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace ZenFulcrum::VR::OpenVRBinding { class IVRRenderModels__FreeRenderModel; }
namespace ZenFulcrum::VR::OpenVRBinding { class IVRRenderModels__FreeTexture; }
namespace ZenFulcrum::VR::OpenVRBinding { class IVRRenderModels__FreeTextureD3D11; }
namespace ZenFulcrum::VR::OpenVRBinding { class IVRRenderModels__GetComponentButtonMask; }
namespace ZenFulcrum::VR::OpenVRBinding { class IVRRenderModels__GetComponentCount; }
namespace ZenFulcrum::VR::OpenVRBinding { class IVRRenderModels__GetComponentName; }
namespace ZenFulcrum::VR::OpenVRBinding { class IVRRenderModels__GetComponentRenderModelName; }
namespace ZenFulcrum::VR::OpenVRBinding { class IVRRenderModels__GetComponentState; }
namespace ZenFulcrum::VR::OpenVRBinding { class IVRRenderModels__GetRenderModelCount; }
namespace ZenFulcrum::VR::OpenVRBinding { class IVRRenderModels__GetRenderModelErrorNameFromEnum; }
namespace ZenFulcrum::VR::OpenVRBinding { class IVRRenderModels__GetRenderModelName; }
namespace ZenFulcrum::VR::OpenVRBinding { class IVRRenderModels__GetRenderModelOriginalPath; }
namespace ZenFulcrum::VR::OpenVRBinding { class IVRRenderModels__GetRenderModelThumbnailURL; }
namespace ZenFulcrum::VR::OpenVRBinding { class IVRRenderModels__LoadIntoTextureD3D11_Async; }
namespace ZenFulcrum::VR::OpenVRBinding { class IVRRenderModels__LoadRenderModel_Async; }
namespace ZenFulcrum::VR::OpenVRBinding { class IVRRenderModels__LoadTextureD3D11_Async; }
namespace ZenFulcrum::VR::OpenVRBinding { class IVRRenderModels__LoadTexture_Async; }
namespace ZenFulcrum::VR::OpenVRBinding { class IVRRenderModels__RenderModelHasComponent; }

namespace ZenFulcrum::VR::OpenVRBinding
{
	inline static constexpr unsigned int IVRRenderModels_TypeDefinitionIndex = 36984;

	struct alignas(8) IVRRenderModels
	{
		::ZenFulcrum::VR::OpenVRBinding::IVRRenderModels__LoadRenderModel_Async* LoadRenderModel_Async; // 0x10
		::ZenFulcrum::VR::OpenVRBinding::IVRRenderModels__FreeRenderModel* FreeRenderModel; // 0x18
		::ZenFulcrum::VR::OpenVRBinding::IVRRenderModels__LoadTexture_Async* LoadTexture_Async; // 0x20
		::ZenFulcrum::VR::OpenVRBinding::IVRRenderModels__FreeTexture* FreeTexture; // 0x28
		::ZenFulcrum::VR::OpenVRBinding::IVRRenderModels__LoadTextureD3D11_Async* LoadTextureD3D11_Async; // 0x30
		::ZenFulcrum::VR::OpenVRBinding::IVRRenderModels__LoadIntoTextureD3D11_Async* LoadIntoTextureD3D11_Async; // 0x38
		::ZenFulcrum::VR::OpenVRBinding::IVRRenderModels__FreeTextureD3D11* FreeTextureD3D11; // 0x40
		::ZenFulcrum::VR::OpenVRBinding::IVRRenderModels__GetRenderModelName* GetRenderModelName; // 0x48
		::ZenFulcrum::VR::OpenVRBinding::IVRRenderModels__GetRenderModelCount* GetRenderModelCount; // 0x50
		::ZenFulcrum::VR::OpenVRBinding::IVRRenderModels__GetComponentCount* GetComponentCount; // 0x58
		::ZenFulcrum::VR::OpenVRBinding::IVRRenderModels__GetComponentName* GetComponentName; // 0x60
		::ZenFulcrum::VR::OpenVRBinding::IVRRenderModels__GetComponentButtonMask* GetComponentButtonMask; // 0x68
		::ZenFulcrum::VR::OpenVRBinding::IVRRenderModels__GetComponentRenderModelName* GetComponentRenderModelName; // 0x70
		::ZenFulcrum::VR::OpenVRBinding::IVRRenderModels__GetComponentState* GetComponentState; // 0x78
		::ZenFulcrum::VR::OpenVRBinding::IVRRenderModels__RenderModelHasComponent* RenderModelHasComponent; // 0x80
		::ZenFulcrum::VR::OpenVRBinding::IVRRenderModels__GetRenderModelThumbnailURL* GetRenderModelThumbnailURL; // 0x88
		::ZenFulcrum::VR::OpenVRBinding::IVRRenderModels__GetRenderModelOriginalPath* GetRenderModelOriginalPath; // 0x90
		::ZenFulcrum::VR::OpenVRBinding::IVRRenderModels__GetRenderModelErrorNameFromEnum* GetRenderModelErrorNameFromEnum; // 0x98
	};
}
