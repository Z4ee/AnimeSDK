#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/ZenFulcrum/VR/OpenVRBinding/EVRRenderModelError.h"
#include "unitysdk/ZenFulcrum/VR/OpenVRBinding/IVRRenderModels.h"
#include "unitysdk/ZenFulcrum/VR/OpenVRBinding/RenderModel_ComponentState_t.h"
#include "unitysdk/ZenFulcrum/VR/OpenVRBinding/RenderModel_ControllerMode_State_t.h"
#include "unitysdk/ZenFulcrum/VR/OpenVRBinding/VRControllerState_t.h"

namespace System { class String; }
namespace System::Text { class StringBuilder; }

#define ZENFULCRUM_VR_OPENVRBINDING_CVRRENDERMODELS_FREERENDERMODEL_OFFSET UNITYSDK_OFFSET(0x1A6E2270)
#define ZENFULCRUM_VR_OPENVRBINDING_CVRRENDERMODELS_FREETEXTURED3D11_OFFSET UNITYSDK_OFFSET(0x1A6E2310)
#define ZENFULCRUM_VR_OPENVRBINDING_CVRRENDERMODELS_FREETEXTURE_OFFSET UNITYSDK_OFFSET(0x1A6E22B0)
#define ZENFULCRUM_VR_OPENVRBINDING_CVRRENDERMODELS_GETCOMPONENTBUTTONMASK_OFFSET UNITYSDK_OFFSET(0x1A6E23B0)
#define ZENFULCRUM_VR_OPENVRBINDING_CVRRENDERMODELS_GETCOMPONENTCOUNT_OFFSET UNITYSDK_OFFSET(0x1A6E2370)
#define ZENFULCRUM_VR_OPENVRBINDING_CVRRENDERMODELS_GETCOMPONENTNAME_OFFSET UNITYSDK_OFFSET(0x1A6E2390)
#define ZENFULCRUM_VR_OPENVRBINDING_CVRRENDERMODELS_GETCOMPONENTRENDERMODELNAME_OFFSET UNITYSDK_OFFSET(0x1A6E23D0)
#define ZENFULCRUM_VR_OPENVRBINDING_CVRRENDERMODELS_GETCOMPONENTSTATE_OFFSET UNITYSDK_OFFSET(0x1A6E23F0)
#define ZENFULCRUM_VR_OPENVRBINDING_CVRRENDERMODELS_GETRENDERMODELCOUNT_OFFSET UNITYSDK_OFFSET(0x1A6E2350)
#define ZENFULCRUM_VR_OPENVRBINDING_CVRRENDERMODELS_GETRENDERMODELERRORNAMEFROMENUM_OFFSET UNITYSDK_OFFSET(0x1A6E2CB0)
#define ZENFULCRUM_VR_OPENVRBINDING_CVRRENDERMODELS_GETRENDERMODELNAME_OFFSET UNITYSDK_OFFSET(0x1A6E2330)
#define ZENFULCRUM_VR_OPENVRBINDING_CVRRENDERMODELS_GETRENDERMODELORIGINALPATH_OFFSET UNITYSDK_OFFSET(0x1A6E2C90)
#define ZENFULCRUM_VR_OPENVRBINDING_CVRRENDERMODELS_GETRENDERMODELTHUMBNAILURL_OFFSET UNITYSDK_OFFSET(0x1A6E2C70)
#define ZENFULCRUM_VR_OPENVRBINDING_CVRRENDERMODELS_LOADINTOTEXTURED3D11_ASYNC_OFFSET UNITYSDK_OFFSET(0x1A6E22F0)
#define ZENFULCRUM_VR_OPENVRBINDING_CVRRENDERMODELS_LOADRENDERMODEL_ASYNC_OFFSET UNITYSDK_OFFSET(0x1A6E2250)
#define ZENFULCRUM_VR_OPENVRBINDING_CVRRENDERMODELS_LOADTEXTURED3D11_ASYNC_OFFSET UNITYSDK_OFFSET(0x1A6E22D0)
#define ZENFULCRUM_VR_OPENVRBINDING_CVRRENDERMODELS_LOADTEXTURE_ASYNC_OFFSET UNITYSDK_OFFSET(0x1A6E2290)
#define ZENFULCRUM_VR_OPENVRBINDING_CVRRENDERMODELS_RENDERMODELHASCOMPONENT_OFFSET UNITYSDK_OFFSET(0x1A6E2C50)
#define ZENFULCRUM_VR_OPENVRBINDING_CVRRENDERMODELS__CTOR_OFFSET UNITYSDK_OFFSET(0x1A6E2160)

namespace ZenFulcrum::VR::OpenVRBinding
{
	inline static constexpr unsigned int CVRRenderModels_TypeDefinitionIndex = 35967;

	class CVRRenderModels : public ::System::Object
	{
	public:
		::ZenFulcrum::VR::OpenVRBinding::IVRRenderModels FnTable; // 0x10

		::System::Void _ctor(::System::IntPtr pInterface)
		{
			return ((::System::Void(*)(::PVOID, ::System::IntPtr))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_CVRRENDERMODELS__CTOR_OFFSET))(this, pInterface);
		}

		::ZenFulcrum::VR::OpenVRBinding::EVRRenderModelError LoadRenderModel_Async(::System::String* pchRenderModelName, ::System::IntPtr& ppRenderModel)
		{
			return ((::ZenFulcrum::VR::OpenVRBinding::EVRRenderModelError(*)(::PVOID, ::System::String*, ::System::IntPtr&))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_CVRRENDERMODELS_LOADRENDERMODEL_ASYNC_OFFSET))(this, pchRenderModelName, ppRenderModel);
		}

		::System::Void FreeRenderModel(::System::IntPtr pRenderModel)
		{
			return ((::System::Void(*)(::PVOID, ::System::IntPtr))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_CVRRENDERMODELS_FREERENDERMODEL_OFFSET))(this, pRenderModel);
		}

		::ZenFulcrum::VR::OpenVRBinding::EVRRenderModelError LoadTexture_Async(::System::Int32 textureId, ::System::IntPtr& ppTexture)
		{
			return ((::ZenFulcrum::VR::OpenVRBinding::EVRRenderModelError(*)(::PVOID, ::System::Int32, ::System::IntPtr&))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_CVRRENDERMODELS_LOADTEXTURE_ASYNC_OFFSET))(this, textureId, ppTexture);
		}

		::System::Void FreeTexture(::System::IntPtr pTexture)
		{
			return ((::System::Void(*)(::PVOID, ::System::IntPtr))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_CVRRENDERMODELS_FREETEXTURE_OFFSET))(this, pTexture);
		}

		::ZenFulcrum::VR::OpenVRBinding::EVRRenderModelError LoadTextureD3D11_Async(::System::Int32 textureId, ::System::IntPtr pD3D11Device, ::System::IntPtr& ppD3D11Texture2D)
		{
			return ((::ZenFulcrum::VR::OpenVRBinding::EVRRenderModelError(*)(::PVOID, ::System::Int32, ::System::IntPtr, ::System::IntPtr&))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_CVRRENDERMODELS_LOADTEXTURED3D11_ASYNC_OFFSET))(this, textureId, pD3D11Device, ppD3D11Texture2D);
		}

		::ZenFulcrum::VR::OpenVRBinding::EVRRenderModelError LoadIntoTextureD3D11_Async(::System::Int32 textureId, ::System::IntPtr pDstTexture)
		{
			return ((::ZenFulcrum::VR::OpenVRBinding::EVRRenderModelError(*)(::PVOID, ::System::Int32, ::System::IntPtr))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_CVRRENDERMODELS_LOADINTOTEXTURED3D11_ASYNC_OFFSET))(this, textureId, pDstTexture);
		}

		::System::Void FreeTextureD3D11(::System::IntPtr pD3D11Texture2D)
		{
			return ((::System::Void(*)(::PVOID, ::System::IntPtr))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_CVRRENDERMODELS_FREETEXTURED3D11_OFFSET))(this, pD3D11Texture2D);
		}

		::System::UInt32 GetRenderModelName(::System::UInt32 unRenderModelIndex, ::System::Text::StringBuilder* pchRenderModelName, ::System::UInt32 unRenderModelNameLen)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32, ::System::Text::StringBuilder*, ::System::UInt32))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_CVRRENDERMODELS_GETRENDERMODELNAME_OFFSET))(this, unRenderModelIndex, pchRenderModelName, unRenderModelNameLen);
		}

		::System::UInt32 GetRenderModelCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_CVRRENDERMODELS_GETRENDERMODELCOUNT_OFFSET))(this);
		}

		::System::UInt32 GetComponentCount(::System::String* pchRenderModelName)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_CVRRENDERMODELS_GETCOMPONENTCOUNT_OFFSET))(this, pchRenderModelName);
		}

		::System::UInt32 GetComponentName(::System::String* pchRenderModelName, ::System::UInt32 unComponentIndex, ::System::Text::StringBuilder* pchComponentName, ::System::UInt32 unComponentNameLen)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::String*, ::System::UInt32, ::System::Text::StringBuilder*, ::System::UInt32))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_CVRRENDERMODELS_GETCOMPONENTNAME_OFFSET))(this, pchRenderModelName, unComponentIndex, pchComponentName, unComponentNameLen);
		}

		::System::UInt64 GetComponentButtonMask(::System::String* pchRenderModelName, ::System::String* pchComponentName)
		{
			return ((::System::UInt64(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_CVRRENDERMODELS_GETCOMPONENTBUTTONMASK_OFFSET))(this, pchRenderModelName, pchComponentName);
		}

		::System::UInt32 GetComponentRenderModelName(::System::String* pchRenderModelName, ::System::String* pchComponentName, ::System::Text::StringBuilder* pchComponentRenderModelName, ::System::UInt32 unComponentRenderModelNameLen)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::String*, ::System::String*, ::System::Text::StringBuilder*, ::System::UInt32))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_CVRRENDERMODELS_GETCOMPONENTRENDERMODELNAME_OFFSET))(this, pchRenderModelName, pchComponentName, pchComponentRenderModelName, unComponentRenderModelNameLen);
		}

		::System::Boolean GetComponentState(::System::String* pchRenderModelName, ::System::String* pchComponentName, ::ZenFulcrum::VR::OpenVRBinding::VRControllerState_t& pControllerState, ::ZenFulcrum::VR::OpenVRBinding::RenderModel_ControllerMode_State_t& pState, ::ZenFulcrum::VR::OpenVRBinding::RenderModel_ComponentState_t& pComponentState)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::String*, ::ZenFulcrum::VR::OpenVRBinding::VRControllerState_t&, ::ZenFulcrum::VR::OpenVRBinding::RenderModel_ControllerMode_State_t&, ::ZenFulcrum::VR::OpenVRBinding::RenderModel_ComponentState_t&))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_CVRRENDERMODELS_GETCOMPONENTSTATE_OFFSET))(this, pchRenderModelName, pchComponentName, pControllerState, pState, pComponentState);
		}

		::System::Boolean RenderModelHasComponent(::System::String* pchRenderModelName, ::System::String* pchComponentName)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_CVRRENDERMODELS_RENDERMODELHASCOMPONENT_OFFSET))(this, pchRenderModelName, pchComponentName);
		}

		::System::UInt32 GetRenderModelThumbnailURL(::System::String* pchRenderModelName, ::System::Text::StringBuilder* pchThumbnailURL, ::System::UInt32 unThumbnailURLLen, ::ZenFulcrum::VR::OpenVRBinding::EVRRenderModelError& peError)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::String*, ::System::Text::StringBuilder*, ::System::UInt32, ::ZenFulcrum::VR::OpenVRBinding::EVRRenderModelError&))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_CVRRENDERMODELS_GETRENDERMODELTHUMBNAILURL_OFFSET))(this, pchRenderModelName, pchThumbnailURL, unThumbnailURLLen, peError);
		}

		::System::UInt32 GetRenderModelOriginalPath(::System::String* pchRenderModelName, ::System::Text::StringBuilder* pchOriginalPath, ::System::UInt32 unOriginalPathLen, ::ZenFulcrum::VR::OpenVRBinding::EVRRenderModelError& peError)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::String*, ::System::Text::StringBuilder*, ::System::UInt32, ::ZenFulcrum::VR::OpenVRBinding::EVRRenderModelError&))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_CVRRENDERMODELS_GETRENDERMODELORIGINALPATH_OFFSET))(this, pchRenderModelName, pchOriginalPath, unOriginalPathLen, peError);
		}

		::System::String* GetRenderModelErrorNameFromEnum(::ZenFulcrum::VR::OpenVRBinding::EVRRenderModelError error)
		{
			return ((::System::String*(*)(::PVOID, ::ZenFulcrum::VR::OpenVRBinding::EVRRenderModelError))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_CVRRENDERMODELS_GETRENDERMODELERRORNAMEFROMENUM_OFFSET))(this, error);
		}
	};
}
