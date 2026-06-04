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

#define UNITYENGINE_RENDERING_CRPVIRTUALCAMERA_APPLYHOMOGRAPHMATRIX_OFFSET UNITYSDK_OFFSET(0x1B2C55E0)
#define UNITYENGINE_RENDERING_CRPVIRTUALCAMERA_CALCCUSTOMRENDERERRECT_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B2C5720)
#define UNITYENGINE_RENDERING_CRPVIRTUALCAMERA_CALCCUSTOMRENDERERRECT_OFFSET UNITYSDK_OFFSET(0x1B2C55A0)
#define UNITYENGINE_RENDERING_CRPVIRTUALCAMERA_GETCUSTOMSPLITPOINT_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B2C56E0)
#define UNITYENGINE_RENDERING_CRPVIRTUALCAMERA_GETCUSTOMSPLITPOINT_OFFSET UNITYSDK_OFFSET(0x1B2C5480)
#define UNITYENGINE_RENDERING_CRPVIRTUALCAMERA_GETDEVICEPROJECTMATRIX_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B2C5710)
#define UNITYENGINE_RENDERING_CRPVIRTUALCAMERA_GETDEVICEPROJECTMATRIX_OFFSET UNITYSDK_OFFSET(0x1B2C5540)
#define UNITYENGINE_RENDERING_CRPVIRTUALCAMERA_GETFRUSTUMPLANESIZEAT_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B2C56D0)
#define UNITYENGINE_RENDERING_CRPVIRTUALCAMERA_GETFRUSTUMPLANESIZEAT_OFFSET UNITYSDK_OFFSET(0x1B2C5450)
#define UNITYENGINE_RENDERING_CRPVIRTUALCAMERA_GETPROJECTMATRIX_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B2C5700)
#define UNITYENGINE_RENDERING_CRPVIRTUALCAMERA_GETPROJECTMATRIX_OFFSET UNITYSDK_OFFSET(0x1B2C54E0)
#define UNITYENGINE_RENDERING_CRPVIRTUALCAMERA_GETVIRTUALCAMERAMODE_OFFSET UNITYSDK_OFFSET(0x1B2C5610)
#define UNITYENGINE_RENDERING_CRPVIRTUALCAMERA_GET_CAMERATOWORLDMATRIX_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B2C56C0)
#define UNITYENGINE_RENDERING_CRPVIRTUALCAMERA_GET_CAMERATOWORLDMATRIX_OFFSET UNITYSDK_OFFSET(0x1B2C53F0)
#define UNITYENGINE_RENDERING_CRPVIRTUALCAMERA_GET_FAR_OFFSET UNITYSDK_OFFSET(0x1B2C5210)
#define UNITYENGINE_RENDERING_CRPVIRTUALCAMERA_GET_FIELDOFVIEW_OFFSET UNITYSDK_OFFSET(0x1B2C52F0)
#define UNITYENGINE_RENDERING_CRPVIRTUALCAMERA_GET_MASKRENDERVIEWRECT_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B2C56B0)
#define UNITYENGINE_RENDERING_CRPVIRTUALCAMERA_GET_MASKRENDERVIEWRECT_OFFSET UNITYSDK_OFFSET(0x1B2C53B0)
#define UNITYENGINE_RENDERING_CRPVIRTUALCAMERA_GET_MASKRENDER_OFFSET UNITYSDK_OFFSET(0x1B2C5390)
#define UNITYENGINE_RENDERING_CRPVIRTUALCAMERA_GET_NEAR_OFFSET UNITYSDK_OFFSET(0x1B2C51F0)
#define UNITYENGINE_RENDERING_CRPVIRTUALCAMERA_GET_OVERRIDERECT_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B2C5690)
#define UNITYENGINE_RENDERING_CRPVIRTUALCAMERA_GET_OVERRIDERECT_OFFSET UNITYSDK_OFFSET(0x1B2C52A0)
#define UNITYENGINE_RENDERING_CRPVIRTUALCAMERA_GET_OVERRIDEVIEWPORT_OFFSET UNITYSDK_OFFSET(0x1B2C5280)
#define UNITYENGINE_RENDERING_CRPVIRTUALCAMERA_GET_RECT_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B2C5670)
#define UNITYENGINE_RENDERING_CRPVIRTUALCAMERA_GET_RECT_OFFSET UNITYSDK_OFFSET(0x1B2C5230)
#define UNITYENGINE_RENDERING_CRPVIRTUALCAMERA_GET_USEVCMASK_OFFSET UNITYSDK_OFFSET(0x1B2C5640)
#define UNITYENGINE_RENDERING_CRPVIRTUALCAMERA_SETCMD_OFFSET UNITYSDK_OFFSET(0x1B2C5630)
#define UNITYENGINE_RENDERING_CRPVIRTUALCAMERA_SETCUSTOMHAIRPASS_INTERNAL_OFFSET UNITYSDK_OFFSET(0x1B2C5310)
#define UNITYENGINE_RENDERING_CRPVIRTUALCAMERA_SETCUSTOMHAIRPASS_OFFSET UNITYSDK_OFFSET(0x1B2C5320)
#define UNITYENGINE_RENDERING_CRPVIRTUALCAMERA_SETCUSTOMSPLITPOINT_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B2C56F0)
#define UNITYENGINE_RENDERING_CRPVIRTUALCAMERA_SETCUSTOMSPLITPOINT_OFFSET UNITYSDK_OFFSET(0x1B2C54B0)
#define UNITYENGINE_RENDERING_CRPVIRTUALCAMERA_SETVIRTUALCAMERACOUNT_OFFSET UNITYSDK_OFFSET(0x1B2C55F0)
#define UNITYENGINE_RENDERING_CRPVIRTUALCAMERA_SETVIRTUALCAMERADATA_OFFSET UNITYSDK_OFFSET(0x1B2C54D0)
#define UNITYENGINE_RENDERING_CRPVIRTUALCAMERA_SETVIRTUALCAMERAMODE_OFFSET UNITYSDK_OFFSET(0x1B2C5600)
#define UNITYENGINE_RENDERING_CRPVIRTUALCAMERA_SETVIRTUALCAMERAREINDEX_OFFSET UNITYSDK_OFFSET(0x1B2C5620)
#define UNITYENGINE_RENDERING_CRPVIRTUALCAMERA_SET_FAR_OFFSET UNITYSDK_OFFSET(0x1B2C5220)
#define UNITYENGINE_RENDERING_CRPVIRTUALCAMERA_SET_FIELDOFVIEW_OFFSET UNITYSDK_OFFSET(0x1B2C5300)
#define UNITYENGINE_RENDERING_CRPVIRTUALCAMERA_SET_MASKRENDER_OFFSET UNITYSDK_OFFSET(0x1B2C53A0)
#define UNITYENGINE_RENDERING_CRPVIRTUALCAMERA_SET_NEAR_OFFSET UNITYSDK_OFFSET(0x1B2C5200)
#define UNITYENGINE_RENDERING_CRPVIRTUALCAMERA_SET_OVERRIDERECT_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B2C56A0)
#define UNITYENGINE_RENDERING_CRPVIRTUALCAMERA_SET_OVERRIDERECT_OFFSET UNITYSDK_OFFSET(0x1B2C52E0)
#define UNITYENGINE_RENDERING_CRPVIRTUALCAMERA_SET_OVERRIDEVIEWPORT_OFFSET UNITYSDK_OFFSET(0x1B2C5290)
#define UNITYENGINE_RENDERING_CRPVIRTUALCAMERA_SET_RECT_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B2C5680)
#define UNITYENGINE_RENDERING_CRPVIRTUALCAMERA_SET_RECT_OFFSET UNITYSDK_OFFSET(0x1B2C5270)
#define UNITYENGINE_RENDERING_CRPVIRTUALCAMERA_SET_USEVCMASK_OFFSET UNITYSDK_OFFSET(0x1B2C5650)
#define UNITYENGINE_RENDERING_CRPVIRTUALCAMERA__CTOR_OFFSET UNITYSDK_OFFSET(0x1B2C5660)

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int CRPVirtualCamera_TypeDefinitionIndex = 4788;

	class CRPVirtualCamera : public ::UnityEngine::Behaviour
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_CRPVIRTUALCAMERA__CTOR_OFFSET))(this);
		}

		::System::Single get_near()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_CRPVIRTUALCAMERA_GET_NEAR_OFFSET))(this);
		}

		::System::Void set_near(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_CRPVIRTUALCAMERA_SET_NEAR_OFFSET))(this, a1);
		}

		::System::Single get_far()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_CRPVIRTUALCAMERA_GET_FAR_OFFSET))(this);
		}

		::System::Void set_far(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_CRPVIRTUALCAMERA_SET_FAR_OFFSET))(this, a1);
		}

		::UnityEngine::Rect get_rect()
		{
			return ((::UnityEngine::Rect(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_CRPVIRTUALCAMERA_GET_RECT_OFFSET))(this);
		}

		::System::Void set_rect(::UnityEngine::Rect a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rect))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_CRPVIRTUALCAMERA_SET_RECT_OFFSET))(this, a1);
		}

		::System::Boolean get_overrideViewPort()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_CRPVIRTUALCAMERA_GET_OVERRIDEVIEWPORT_OFFSET))(this);
		}

		::System::Void set_overrideViewPort(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_CRPVIRTUALCAMERA_SET_OVERRIDEVIEWPORT_OFFSET))(this, a1);
		}

		::UnityEngine::Rect get_overrideRect()
		{
			return ((::UnityEngine::Rect(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_CRPVIRTUALCAMERA_GET_OVERRIDERECT_OFFSET))(this);
		}

		::System::Void set_overrideRect(::UnityEngine::Rect a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rect))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_CRPVIRTUALCAMERA_SET_OVERRIDERECT_OFFSET))(this, a1);
		}

		::System::Single get_fieldOfView()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_CRPVIRTUALCAMERA_GET_FIELDOFVIEW_OFFSET))(this);
		}

		::System::Void set_fieldOfView(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_CRPVIRTUALCAMERA_SET_FIELDOFVIEW_OFFSET))(this, a1);
		}

		static ::System::Void SetCustomHairPass_Internal(::System::Int32 a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Int32 a4)
		{
			return ((::System::Void(*)(::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_CRPVIRTUALCAMERA_SETCUSTOMHAIRPASS_INTERNAL_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Void SetCustomHairPass(::System::Int32 a1, ::UnityEngine::PassTagID& a2, ::UnityEngine::PassTagID& a3, ::System::Int32 a4)
		{
			return ((::System::Void(*)(::System::Int32, ::UnityEngine::PassTagID&, ::UnityEngine::PassTagID&, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_CRPVIRTUALCAMERA_SETCUSTOMHAIRPASS_OFFSET))(a1, a2, a3, a4);
		}

		::UnityEngine::MeshRenderer* get_maskRender()
		{
			return ((::UnityEngine::MeshRenderer*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_CRPVIRTUALCAMERA_GET_MASKRENDER_OFFSET))(this);
		}

		::System::Void set_maskRender(::UnityEngine::MeshRenderer* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::MeshRenderer*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_CRPVIRTUALCAMERA_SET_MASKRENDER_OFFSET))(this, a1);
		}

		::UnityEngine::Rect get_maskRenderViewRect()
		{
			return ((::UnityEngine::Rect(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_CRPVIRTUALCAMERA_GET_MASKRENDERVIEWRECT_OFFSET))(this);
		}

		::UnityEngine::Matrix4x4 get_cameraToWorldMatrix()
		{
			return ((::UnityEngine::Matrix4x4(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_CRPVIRTUALCAMERA_GET_CAMERATOWORLDMATRIX_OFFSET))(this);
		}

		::UnityEngine::Vector2 GetFrustumPlaneSizeAt(::System::Single a1)
		{
			return ((::UnityEngine::Vector2(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_CRPVIRTUALCAMERA_GETFRUSTUMPLANESIZEAT_OFFSET))(this, a1);
		}

		::UnityEngine::Vector2 GetCustomSplitPoint(::System::Int32 a1)
		{
			return ((::UnityEngine::Vector2(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_CRPVIRTUALCAMERA_GETCUSTOMSPLITPOINT_OFFSET))(this, a1);
		}

		::System::Void SetCustomSplitPoint(::System::Int32 a1, ::UnityEngine::Vector2 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_CRPVIRTUALCAMERA_SETCUSTOMSPLITPOINT_OFFSET))(this, a1, a2);
		}

		static ::System::Void SetVirtualCameraData(::UnityEngine::Rendering::CRPVirtualCamera* a1, ::System::Int32 a2, ::UnityEngine::Camera* a3, ::System::Boolean a4)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::CRPVirtualCamera*, ::System::Int32, ::UnityEngine::Camera*, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_CRPVIRTUALCAMERA_SETVIRTUALCAMERADATA_OFFSET))(a1, a2, a3, a4);
		}

		static ::UnityEngine::Matrix4x4 GetProjectMatrix(::System::Int32 a1)
		{
			return ((::UnityEngine::Matrix4x4(*)(::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_CRPVIRTUALCAMERA_GETPROJECTMATRIX_OFFSET))(a1);
		}

		static ::UnityEngine::Matrix4x4 GetDeviceProjectMatrix(::System::Int32 a1)
		{
			return ((::UnityEngine::Matrix4x4(*)(::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_CRPVIRTUALCAMERA_GETDEVICEPROJECTMATRIX_OFFSET))(a1);
		}

		static ::UnityEngine::Rect CalcCustomRendererRect(::UnityEngine::Renderer* a1, ::UnityEngine::Camera* a2)
		{
			return ((::UnityEngine::Rect(*)(::UnityEngine::Renderer*, ::UnityEngine::Camera*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_CRPVIRTUALCAMERA_CALCCUSTOMRENDERERRECT_OFFSET))(a1, a2);
		}

		static ::System::Void ApplyHomographMatrix(::UnityEngine::Rendering::CRPVirtualCamera* a1, ::System::Int32 a2, ::UnityEngine::Matrix4x4& a3)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::CRPVirtualCamera*, ::System::Int32, ::UnityEngine::Matrix4x4&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_CRPVIRTUALCAMERA_APPLYHOMOGRAPHMATRIX_OFFSET))(a1, a2, a3);
		}

		static ::System::Void SetVirtualCameraCount(::System::Int32 a1)
		{
			return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_CRPVIRTUALCAMERA_SETVIRTUALCAMERACOUNT_OFFSET))(a1);
		}

		static ::System::Void SetVirtualCameraMode(::System::Int32 a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_CRPVIRTUALCAMERA_SETVIRTUALCAMERAMODE_OFFSET))(a1, a2);
		}

		static ::System::Int32 GetVirtualCameraMode()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_CRPVIRTUALCAMERA_GETVIRTUALCAMERAMODE_OFFSET))();
		}

		static ::System::Void SetVirtualCameraReIndex(::Il2CppArray<::System::Int32>* a1)
		{
			return ((::System::Void(*)(::Il2CppArray<::System::Int32>*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_CRPVIRTUALCAMERA_SETVIRTUALCAMERAREINDEX_OFFSET))(a1);
		}

		static ::System::Void SetCmd(::System::Int32 a1, ::UnityEngine::Rendering::CommandBuffer* a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::System::Int32, ::UnityEngine::Rendering::CommandBuffer*, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_CRPVIRTUALCAMERA_SETCMD_OFFSET))(a1, a2, a3);
		}

		::System::Boolean get_useVCMask()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_CRPVIRTUALCAMERA_GET_USEVCMASK_OFFSET))(this);
		}

		::System::Void set_useVCMask(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_CRPVIRTUALCAMERA_SET_USEVCMASK_OFFSET))(this, a1);
		}

		::System::Void get_rect_Injected(::UnityEngine::Rect& a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rect&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_CRPVIRTUALCAMERA_GET_RECT_INJECTED_OFFSET))(this, a1);
		}

		::System::Void set_rect_Injected(::UnityEngine::Rect& a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rect&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_CRPVIRTUALCAMERA_SET_RECT_INJECTED_OFFSET))(this, a1);
		}

		::System::Void get_overrideRect_Injected(::UnityEngine::Rect& a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rect&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_CRPVIRTUALCAMERA_GET_OVERRIDERECT_INJECTED_OFFSET))(this, a1);
		}

		::System::Void set_overrideRect_Injected(::UnityEngine::Rect& a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rect&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_CRPVIRTUALCAMERA_SET_OVERRIDERECT_INJECTED_OFFSET))(this, a1);
		}

		::System::Void get_maskRenderViewRect_Injected(::UnityEngine::Rect& a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rect&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_CRPVIRTUALCAMERA_GET_MASKRENDERVIEWRECT_INJECTED_OFFSET))(this, a1);
		}

		::System::Void get_cameraToWorldMatrix_Injected(::UnityEngine::Matrix4x4& a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Matrix4x4&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_CRPVIRTUALCAMERA_GET_CAMERATOWORLDMATRIX_INJECTED_OFFSET))(this, a1);
		}

		::System::Void GetFrustumPlaneSizeAt_Injected(::System::Single a1, ::UnityEngine::Vector2& a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::UnityEngine::Vector2&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_CRPVIRTUALCAMERA_GETFRUSTUMPLANESIZEAT_INJECTED_OFFSET))(this, a1, a2);
		}

		::System::Void GetCustomSplitPoint_Injected(::System::Int32 a1, ::UnityEngine::Vector2& a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Vector2&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_CRPVIRTUALCAMERA_GETCUSTOMSPLITPOINT_INJECTED_OFFSET))(this, a1, a2);
		}

		::System::Void SetCustomSplitPoint_Injected(::System::Int32 a1, ::UnityEngine::Vector2& a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Vector2&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_CRPVIRTUALCAMERA_SETCUSTOMSPLITPOINT_INJECTED_OFFSET))(this, a1, a2);
		}

		static ::System::Void GetProjectMatrix_Injected(::System::Int32 a1, ::UnityEngine::Matrix4x4& a2)
		{
			return ((::System::Void(*)(::System::Int32, ::UnityEngine::Matrix4x4&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_CRPVIRTUALCAMERA_GETPROJECTMATRIX_INJECTED_OFFSET))(a1, a2);
		}

		static ::System::Void GetDeviceProjectMatrix_Injected(::System::Int32 a1, ::UnityEngine::Matrix4x4& a2)
		{
			return ((::System::Void(*)(::System::Int32, ::UnityEngine::Matrix4x4&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_CRPVIRTUALCAMERA_GETDEVICEPROJECTMATRIX_INJECTED_OFFSET))(a1, a2);
		}

		static ::System::Void CalcCustomRendererRect_Injected(::UnityEngine::Renderer* a1, ::UnityEngine::Camera* a2, ::UnityEngine::Rect& a3)
		{
			return ((::System::Void(*)(::UnityEngine::Renderer*, ::UnityEngine::Camera*, ::UnityEngine::Rect&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_CRPVIRTUALCAMERA_CALCCUSTOMRENDERERRECT_INJECTED_OFFSET))(a1, a2, a3);
		}
	};
}
