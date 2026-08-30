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

#define ZENFULCRUM_VR_OPENVRBINDING_CVRRENDERMODELS_FREERENDERMODEL_OFFSET UNITYSDK_OFFSET(0x1EFAE1E0)
#define ZENFULCRUM_VR_OPENVRBINDING_CVRRENDERMODELS_FREETEXTURED3D11_OFFSET UNITYSDK_OFFSET(0x1EFAE2D0)
#define ZENFULCRUM_VR_OPENVRBINDING_CVRRENDERMODELS_FREETEXTURE_OFFSET UNITYSDK_OFFSET(0x1EFAE240)
#define ZENFULCRUM_VR_OPENVRBINDING_CVRRENDERMODELS_GETCOMPONENTBUTTONMASK_OFFSET UNITYSDK_OFFSET(0x1EFAE3D0)
#define ZENFULCRUM_VR_OPENVRBINDING_CVRRENDERMODELS_GETCOMPONENTCOUNT_OFFSET UNITYSDK_OFFSET(0x1EFAE360)
#define ZENFULCRUM_VR_OPENVRBINDING_CVRRENDERMODELS_GETCOMPONENTNAME_OFFSET UNITYSDK_OFFSET(0x1EFAE390)
#define ZENFULCRUM_VR_OPENVRBINDING_CVRRENDERMODELS_GETCOMPONENTRENDERMODELNAME_OFFSET UNITYSDK_OFFSET(0x1EFAE400)
#define ZENFULCRUM_VR_OPENVRBINDING_CVRRENDERMODELS_GETCOMPONENTSTATE_OFFSET UNITYSDK_OFFSET(0x1EFAE440)
#define ZENFULCRUM_VR_OPENVRBINDING_CVRRENDERMODELS_GETRENDERMODELCOUNT_OFFSET UNITYSDK_OFFSET(0x1EFAE330)
#define ZENFULCRUM_VR_OPENVRBINDING_CVRRENDERMODELS_GETRENDERMODELERRORNAMEFROMENUM_OFFSET UNITYSDK_OFFSET(0x1EFAE690)
#define ZENFULCRUM_VR_OPENVRBINDING_CVRRENDERMODELS_GETRENDERMODELNAME_OFFSET UNITYSDK_OFFSET(0x1EFAE300)
#define ZENFULCRUM_VR_OPENVRBINDING_CVRRENDERMODELS_GETRENDERMODELORIGINALPATH_OFFSET UNITYSDK_OFFSET(0x1EFAE650)
#define ZENFULCRUM_VR_OPENVRBINDING_CVRRENDERMODELS_GETRENDERMODELTHUMBNAILURL_OFFSET UNITYSDK_OFFSET(0x1EFAE610)
#define ZENFULCRUM_VR_OPENVRBINDING_CVRRENDERMODELS_LOADINTOTEXTURED3D11_ASYNC_OFFSET UNITYSDK_OFFSET(0x1EFAE2A0)
#define ZENFULCRUM_VR_OPENVRBINDING_CVRRENDERMODELS_LOADRENDERMODEL_ASYNC_OFFSET UNITYSDK_OFFSET(0x1EFAE1B0)
#define ZENFULCRUM_VR_OPENVRBINDING_CVRRENDERMODELS_LOADTEXTURED3D11_ASYNC_OFFSET UNITYSDK_OFFSET(0x1EFAE270)
#define ZENFULCRUM_VR_OPENVRBINDING_CVRRENDERMODELS_LOADTEXTURE_ASYNC_OFFSET UNITYSDK_OFFSET(0x1EFAE210)
#define ZENFULCRUM_VR_OPENVRBINDING_CVRRENDERMODELS_RENDERMODELHASCOMPONENT_OFFSET UNITYSDK_OFFSET(0x1EFAE5E0)
#define ZENFULCRUM_VR_OPENVRBINDING_CVRRENDERMODELS__CTOR_OFFSET UNITYSDK_OFFSET(0x1EFAE0C0)

namespace ZenFulcrum::VR::OpenVRBinding
{
	inline static constexpr unsigned int CVRRenderModels_TypeDefinitionIndex = 37908;

	class CVRRenderModels : public ::System::Object
	{
	public:
		::ZenFulcrum::VR::OpenVRBinding::IVRRenderModels FnTable; // 0x10

		::System::Void _ctor(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IntPtr))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_CVRRENDERMODELS__CTOR_OFFSET))(this, a1);
		}

		::ZenFulcrum::VR::OpenVRBinding::EVRRenderModelError LoadRenderModel_Async(::System::String* a1, ::System::IntPtr& a2)
		{
			return ((::ZenFulcrum::VR::OpenVRBinding::EVRRenderModelError(*)(::PVOID, ::System::String*, ::System::IntPtr&))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_CVRRENDERMODELS_LOADRENDERMODEL_ASYNC_OFFSET))(this, a1, a2);
		}

		::System::Void FreeRenderModel(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IntPtr))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_CVRRENDERMODELS_FREERENDERMODEL_OFFSET))(this, a1);
		}

		::ZenFulcrum::VR::OpenVRBinding::EVRRenderModelError LoadTexture_Async(::System::Int32 a1, ::System::IntPtr& a2)
		{
			return ((::ZenFulcrum::VR::OpenVRBinding::EVRRenderModelError(*)(::PVOID, ::System::Int32, ::System::IntPtr&))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_CVRRENDERMODELS_LOADTEXTURE_ASYNC_OFFSET))(this, a1, a2);
		}

		::System::Void FreeTexture(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IntPtr))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_CVRRENDERMODELS_FREETEXTURE_OFFSET))(this, a1);
		}

		::ZenFulcrum::VR::OpenVRBinding::EVRRenderModelError LoadTextureD3D11_Async(::System::Int32 a1, ::System::IntPtr a2, ::System::IntPtr& a3)
		{
			return ((::ZenFulcrum::VR::OpenVRBinding::EVRRenderModelError(*)(::PVOID, ::System::Int32, ::System::IntPtr, ::System::IntPtr&))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_CVRRENDERMODELS_LOADTEXTURED3D11_ASYNC_OFFSET))(this, a1, a2, a3);
		}

		::ZenFulcrum::VR::OpenVRBinding::EVRRenderModelError LoadIntoTextureD3D11_Async(::System::Int32 a1, ::System::IntPtr a2)
		{
			return ((::ZenFulcrum::VR::OpenVRBinding::EVRRenderModelError(*)(::PVOID, ::System::Int32, ::System::IntPtr))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_CVRRENDERMODELS_LOADINTOTEXTURED3D11_ASYNC_OFFSET))(this, a1, a2);
		}

		::System::Void FreeTextureD3D11(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IntPtr))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_CVRRENDERMODELS_FREETEXTURED3D11_OFFSET))(this, a1);
		}

		::System::UInt32 GetRenderModelName(::System::UInt32 a1, ::System::Text::StringBuilder* a2, ::System::UInt32 a3)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32, ::System::Text::StringBuilder*, ::System::UInt32))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_CVRRENDERMODELS_GETRENDERMODELNAME_OFFSET))(this, a1, a2, a3);
		}

		::System::UInt32 GetRenderModelCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_CVRRENDERMODELS_GETRENDERMODELCOUNT_OFFSET))(this);
		}

		::System::UInt32 GetComponentCount(::System::String* a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_CVRRENDERMODELS_GETCOMPONENTCOUNT_OFFSET))(this, a1);
		}

		::System::UInt32 GetComponentName(::System::String* a1, ::System::UInt32 a2, ::System::Text::StringBuilder* a3, ::System::UInt32 a4)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::String*, ::System::UInt32, ::System::Text::StringBuilder*, ::System::UInt32))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_CVRRENDERMODELS_GETCOMPONENTNAME_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::UInt64 GetComponentButtonMask(::System::String* a1, ::System::String* a2)
		{
			return ((::System::UInt64(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_CVRRENDERMODELS_GETCOMPONENTBUTTONMASK_OFFSET))(this, a1, a2);
		}

		::System::UInt32 GetComponentRenderModelName(::System::String* a1, ::System::String* a2, ::System::Text::StringBuilder* a3, ::System::UInt32 a4)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::String*, ::System::String*, ::System::Text::StringBuilder*, ::System::UInt32))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_CVRRENDERMODELS_GETCOMPONENTRENDERMODELNAME_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Boolean GetComponentState(::System::String* a1, ::System::String* a2, ::ZenFulcrum::VR::OpenVRBinding::VRControllerState_t& a3, ::ZenFulcrum::VR::OpenVRBinding::RenderModel_ControllerMode_State_t& a4, ::ZenFulcrum::VR::OpenVRBinding::RenderModel_ComponentState_t& a5)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::String*, ::ZenFulcrum::VR::OpenVRBinding::VRControllerState_t&, ::ZenFulcrum::VR::OpenVRBinding::RenderModel_ControllerMode_State_t&, ::ZenFulcrum::VR::OpenVRBinding::RenderModel_ComponentState_t&))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_CVRRENDERMODELS_GETCOMPONENTSTATE_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Boolean RenderModelHasComponent(::System::String* a1, ::System::String* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_CVRRENDERMODELS_RENDERMODELHASCOMPONENT_OFFSET))(this, a1, a2);
		}

		::System::UInt32 GetRenderModelThumbnailURL(::System::String* a1, ::System::Text::StringBuilder* a2, ::System::UInt32 a3, ::ZenFulcrum::VR::OpenVRBinding::EVRRenderModelError& a4)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::String*, ::System::Text::StringBuilder*, ::System::UInt32, ::ZenFulcrum::VR::OpenVRBinding::EVRRenderModelError&))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_CVRRENDERMODELS_GETRENDERMODELTHUMBNAILURL_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::UInt32 GetRenderModelOriginalPath(::System::String* a1, ::System::Text::StringBuilder* a2, ::System::UInt32 a3, ::ZenFulcrum::VR::OpenVRBinding::EVRRenderModelError& a4)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::String*, ::System::Text::StringBuilder*, ::System::UInt32, ::ZenFulcrum::VR::OpenVRBinding::EVRRenderModelError&))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_CVRRENDERMODELS_GETRENDERMODELORIGINALPATH_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::String* GetRenderModelErrorNameFromEnum(::ZenFulcrum::VR::OpenVRBinding::EVRRenderModelError a1)
		{
			return ((::System::String*(*)(::PVOID, ::ZenFulcrum::VR::OpenVRBinding::EVRRenderModelError))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_CVRRENDERMODELS_GETRENDERMODELERRORNAMEFROMENUM_OFFSET))(this, a1);
		}
	};
}
