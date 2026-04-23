#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Behaviour.h"
#include "unitysdk/UnityEngine/Matrix4x4.h"
#include "unitysdk/UnityEngine/PassTagID.h"
#include "unitysdk/UnityEngine/Rect.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace UnityEngine { class Camera; }
namespace UnityEngine { class MeshRenderer; }
namespace UnityEngine { class Renderer; }
namespace UnityEngine::Rendering { class CommandBuffer; }

#define UNITYENGINE_RENDERING_CRPVIRTUALCAMERA_APPLYHOMOGRAPHMATRIX_OFFSET UNITYSDK_OFFSET(0x1A477280)
#define UNITYENGINE_RENDERING_CRPVIRTUALCAMERA_CALCCUSTOMRENDERERRECT_INJECTED_OFFSET UNITYSDK_OFFSET(0x1A477270)
#define UNITYENGINE_RENDERING_CRPVIRTUALCAMERA_CALCCUSTOMRENDERERRECT_OFFSET UNITYSDK_OFFSET(0x1A477230)
#define UNITYENGINE_RENDERING_CRPVIRTUALCAMERA_GET_MASKRENDERVIEWRECT_INJECTED_OFFSET UNITYSDK_OFFSET(0x1A4771E0)
#define UNITYENGINE_RENDERING_CRPVIRTUALCAMERA_GET_MASKRENDERVIEWRECT_OFFSET UNITYSDK_OFFSET(0x1A4771A0)
#define UNITYENGINE_RENDERING_CRPVIRTUALCAMERA_GET_MASKRENDER_OFFSET UNITYSDK_OFFSET(0x1A477180)
#define UNITYENGINE_RENDERING_CRPVIRTUALCAMERA_GET_RECT_INJECTED_OFFSET UNITYSDK_OFFSET(0x1A477090)
#define UNITYENGINE_RENDERING_CRPVIRTUALCAMERA_GET_RECT_OFFSET UNITYSDK_OFFSET(0x1A477050)
#define UNITYENGINE_RENDERING_CRPVIRTUALCAMERA_SETCMD_OFFSET UNITYSDK_OFFSET(0x1A4772C0)
#define UNITYENGINE_RENDERING_CRPVIRTUALCAMERA_SETCUSTOMHAIRPASS_INTERNAL_OFFSET UNITYSDK_OFFSET(0x1A477100)
#define UNITYENGINE_RENDERING_CRPVIRTUALCAMERA_SETCUSTOMHAIRPASS_OFFSET UNITYSDK_OFFSET(0x1A477110)
#define UNITYENGINE_RENDERING_CRPVIRTUALCAMERA_SETCUSTOMSPLITPOINT_INJECTED_OFFSET UNITYSDK_OFFSET(0x1A477210)
#define UNITYENGINE_RENDERING_CRPVIRTUALCAMERA_SETCUSTOMSPLITPOINT_OFFSET UNITYSDK_OFFSET(0x1A4771F0)
#define UNITYENGINE_RENDERING_CRPVIRTUALCAMERA_SETVIRTUALCAMERACOUNT_OFFSET UNITYSDK_OFFSET(0x1A477290)
#define UNITYENGINE_RENDERING_CRPVIRTUALCAMERA_SETVIRTUALCAMERADATA_OFFSET UNITYSDK_OFFSET(0x1A477220)
#define UNITYENGINE_RENDERING_CRPVIRTUALCAMERA_SETVIRTUALCAMERAMODE_OFFSET UNITYSDK_OFFSET(0x1A4772A0)
#define UNITYENGINE_RENDERING_CRPVIRTUALCAMERA_SETVIRTUALCAMERAREINDEX_OFFSET UNITYSDK_OFFSET(0x1A4772B0)
#define UNITYENGINE_RENDERING_CRPVIRTUALCAMERA_SET_FIELDOFVIEW_OFFSET UNITYSDK_OFFSET(0x1A4770F0)
#define UNITYENGINE_RENDERING_CRPVIRTUALCAMERA_SET_MASKRENDER_OFFSET UNITYSDK_OFFSET(0x1A477190)
#define UNITYENGINE_RENDERING_CRPVIRTUALCAMERA_SET_NEAR_OFFSET UNITYSDK_OFFSET(0x1A477040)
#define UNITYENGINE_RENDERING_CRPVIRTUALCAMERA_SET_OVERRIDERECT_INJECTED_OFFSET UNITYSDK_OFFSET(0x1A4770E0)
#define UNITYENGINE_RENDERING_CRPVIRTUALCAMERA_SET_OVERRIDERECT_OFFSET UNITYSDK_OFFSET(0x1A4770D0)
#define UNITYENGINE_RENDERING_CRPVIRTUALCAMERA_SET_OVERRIDEVIEWPORT_OFFSET UNITYSDK_OFFSET(0x1A4770C0)
#define UNITYENGINE_RENDERING_CRPVIRTUALCAMERA_SET_RECT_INJECTED_OFFSET UNITYSDK_OFFSET(0x1A4770B0)
#define UNITYENGINE_RENDERING_CRPVIRTUALCAMERA_SET_RECT_OFFSET UNITYSDK_OFFSET(0x1A4770A0)
#define UNITYENGINE_RENDERING_CRPVIRTUALCAMERA_SET_USEVCMASK_OFFSET UNITYSDK_OFFSET(0x1A4772D0)

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int CRPVirtualCamera_TypeDefinitionIndex = 4614;

	class CRPVirtualCamera : public ::UnityEngine::Behaviour
	{
	public:
		::System::Void set_near(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_CRPVIRTUALCAMERA_SET_NEAR_OFFSET))(this, value);
		}

		::UnityEngine::Rect get_rect()
		{
			return ((::UnityEngine::Rect(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_CRPVIRTUALCAMERA_GET_RECT_OFFSET))(this);
		}

		::System::Void set_rect(::UnityEngine::Rect value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rect))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_CRPVIRTUALCAMERA_SET_RECT_OFFSET))(this, value);
		}

		::System::Void set_overrideViewPort(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_CRPVIRTUALCAMERA_SET_OVERRIDEVIEWPORT_OFFSET))(this, value);
		}

		::System::Void set_overrideRect(::UnityEngine::Rect value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rect))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_CRPVIRTUALCAMERA_SET_OVERRIDERECT_OFFSET))(this, value);
		}

		::System::Void set_fieldOfView(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_CRPVIRTUALCAMERA_SET_FIELDOFVIEW_OFFSET))(this, value);
		}

		static ::System::Void SetCustomHairPass_Internal(::System::Int32 hairShaderID, ::System::Int32 pass0, ::System::Int32 pass1, ::System::Int32 stencil)
		{
			return ((::System::Void(*)(::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_CRPVIRTUALCAMERA_SETCUSTOMHAIRPASS_INTERNAL_OFFSET))(hairShaderID, pass0, pass1, stencil);
		}

		static ::System::Void SetCustomHairPass(::System::Int32 hairShaderID, ::UnityEngine::PassTagID& pass0, ::UnityEngine::PassTagID& pass1, ::System::Int32 stencil)
		{
			return ((::System::Void(*)(::System::Int32, ::UnityEngine::PassTagID&, ::UnityEngine::PassTagID&, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_CRPVIRTUALCAMERA_SETCUSTOMHAIRPASS_OFFSET))(hairShaderID, pass0, pass1, stencil);
		}

		::UnityEngine::MeshRenderer* get_maskRender()
		{
			return ((::UnityEngine::MeshRenderer*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_CRPVIRTUALCAMERA_GET_MASKRENDER_OFFSET))(this);
		}

		::System::Void set_maskRender(::UnityEngine::MeshRenderer* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::MeshRenderer*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_CRPVIRTUALCAMERA_SET_MASKRENDER_OFFSET))(this, value);
		}

		::UnityEngine::Rect get_maskRenderViewRect()
		{
			return ((::UnityEngine::Rect(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_CRPVIRTUALCAMERA_GET_MASKRENDERVIEWRECT_OFFSET))(this);
		}

		::System::Void SetCustomSplitPoint(::System::Int32 index, ::UnityEngine::Vector2 point)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_CRPVIRTUALCAMERA_SETCUSTOMSPLITPOINT_OFFSET))(this, index, point);
		}

		static ::System::Void SetVirtualCameraData(::UnityEngine::Rendering::CRPVirtualCamera* vc, ::System::Int32 index, ::UnityEngine::Camera* camera, ::System::Boolean enable)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::CRPVirtualCamera*, ::System::Int32, ::UnityEngine::Camera*, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_CRPVIRTUALCAMERA_SETVIRTUALCAMERADATA_OFFSET))(vc, index, camera, enable);
		}

		static ::UnityEngine::Rect CalcCustomRendererRect(::UnityEngine::Renderer* renderer, ::UnityEngine::Camera* camera)
		{
			return ((::UnityEngine::Rect(*)(::UnityEngine::Renderer*, ::UnityEngine::Camera*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_CRPVIRTUALCAMERA_CALCCUSTOMRENDERERRECT_OFFSET))(renderer, camera);
		}

		static ::System::Void ApplyHomographMatrix(::UnityEngine::Rendering::CRPVirtualCamera* vc, ::System::Int32 index, ::UnityEngine::Matrix4x4& homograph)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::CRPVirtualCamera*, ::System::Int32, ::UnityEngine::Matrix4x4&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_CRPVIRTUALCAMERA_APPLYHOMOGRAPHMATRIX_OFFSET))(vc, index, homograph);
		}

		static ::System::Void SetVirtualCameraCount(::System::Int32 count)
		{
			return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_CRPVIRTUALCAMERA_SETVIRTUALCAMERACOUNT_OFFSET))(count);
		}

		static ::System::Void SetVirtualCameraMode(::System::Int32 vcMode, ::System::Boolean backgroundUseVCMask)
		{
			return ((::System::Void(*)(::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_CRPVIRTUALCAMERA_SETVIRTUALCAMERAMODE_OFFSET))(vcMode, backgroundUseVCMask);
		}

		static ::System::Void SetVirtualCameraReIndex(::Il2CppArray<::System::Int32>* reIndex)
		{
			return ((::System::Void(*)(::Il2CppArray<::System::Int32>*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_CRPVIRTUALCAMERA_SETVIRTUALCAMERAREINDEX_OFFSET))(reIndex);
		}

		static ::System::Void SetCmd(::System::Int32 vcindex, ::UnityEngine::Rendering::CommandBuffer* cmd, ::System::Int32 pos)
		{
			return ((::System::Void(*)(::System::Int32, ::UnityEngine::Rendering::CommandBuffer*, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_CRPVIRTUALCAMERA_SETCMD_OFFSET))(vcindex, cmd, pos);
		}

		::System::Void set_useVCMask(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_CRPVIRTUALCAMERA_SET_USEVCMASK_OFFSET))(this, value);
		}

		::System::Void get_rect_Injected(::UnityEngine::Rect& ret)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rect&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_CRPVIRTUALCAMERA_GET_RECT_INJECTED_OFFSET))(this, ret);
		}

		::System::Void set_rect_Injected(::UnityEngine::Rect& value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rect&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_CRPVIRTUALCAMERA_SET_RECT_INJECTED_OFFSET))(this, value);
		}

		::System::Void set_overrideRect_Injected(::UnityEngine::Rect& value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rect&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_CRPVIRTUALCAMERA_SET_OVERRIDERECT_INJECTED_OFFSET))(this, value);
		}

		::System::Void get_maskRenderViewRect_Injected(::UnityEngine::Rect& ret)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rect&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_CRPVIRTUALCAMERA_GET_MASKRENDERVIEWRECT_INJECTED_OFFSET))(this, ret);
		}

		::System::Void SetCustomSplitPoint_Injected(::System::Int32 index, ::UnityEngine::Vector2& point)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Vector2&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_CRPVIRTUALCAMERA_SETCUSTOMSPLITPOINT_INJECTED_OFFSET))(this, index, point);
		}

		static ::System::Void CalcCustomRendererRect_Injected(::UnityEngine::Renderer* renderer, ::UnityEngine::Camera* camera, ::UnityEngine::Rect& ret)
		{
			return ((::System::Void(*)(::UnityEngine::Renderer*, ::UnityEngine::Camera*, ::UnityEngine::Rect&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_CRPVIRTUALCAMERA_CALCCUSTOMRENDERERRECT_INJECTED_OFFSET))(renderer, camera, ret);
		}
	};
}
