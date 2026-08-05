#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Bounds.h"
#include "unitysdk/UnityEngine/Matrix4x4.h"
#include "unitysdk/UnityEngine/Plane.h"
#include "unitysdk/UnityEngine/Rendering/Universal/CachedGrassRenderItemData.h"
#include "unitysdk/UnityEngine/Rendering/Universal/GPUGrassProxy_GroupData___c__DisplayClass4_0.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define UNITYENGINE_RENDERING_UNIVERSAL_GPUGRASSPROXY_GROUPDATA_ADDTOLIST_1_OFFSET UNITYSDK_OFFSET(0x1C99CCE0)
#define UNITYENGINE_RENDERING_UNIVERSAL_GPUGRASSPROXY_GROUPDATA_ADDTOLIST_OFFSET UNITYSDK_OFFSET(0x1C99CB80)
#define UNITYENGINE_RENDERING_UNIVERSAL_GPUGRASSPROXY_GROUPDATA_CHECKFRUSTUMVISIBLEFORL2GROUP_OFFSET UNITYSDK_OFFSET(0x1C99D090)
#define UNITYENGINE_RENDERING_UNIVERSAL_GPUGRASSPROXY_GROUPDATA_CHECKGROUPVISIBLE_OFFSET UNITYSDK_OFFSET(0x1C99D180)
#define UNITYENGINE_RENDERING_UNIVERSAL_GPUGRASSPROXY_GROUPDATA_EXTENDBOUND_OFFSET UNITYSDK_OFFSET(0x1C99CF90)
#define UNITYENGINE_RENDERING_UNIVERSAL_GPUGRASSPROXY_GROUPDATA_GET_ISVISIBLE_OFFSET UNITYSDK_OFFSET(0x1C99D070)
#define UNITYENGINE_RENDERING_UNIVERSAL_GPUGRASSPROXY_GROUPDATA_RESETBOUNDBOX_OFFSET UNITYSDK_OFFSET(0x1C99C820)
#define UNITYENGINE_RENDERING_UNIVERSAL_GPUGRASSPROXY_GROUPDATA_SET_ISVISIBLE_OFFSET UNITYSDK_OFFSET(0x1C99D080)
#define UNITYENGINE_RENDERING_UNIVERSAL_GPUGRASSPROXY_GROUPDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1C99C760)
#define UNITYENGINE_RENDERING_UNIVERSAL_GPUGRASSPROXY_GROUPDATA__RESETBOUNDBOX_G__EXTENTSIZE_4_0_OFFSET UNITYSDK_OFFSET(0x1C99CAD0)

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int GPUGrassProxy_GroupData_TypeDefinitionIndex = 27263;

	class GPUGrassProxy_GroupData : public ::System::Object
	{
	public:
		::UnityEngine::Bounds groupBounds; // 0x10
		::System::Collections::Generic::List_1<::System::Int32>* renderItemIndex; // 0x28
		::System::Int32 runTimeLodIndex; // 0x30
		::System::Boolean _IsVisible_k__BackingField; // 0x34

		::System::Void _ctor(::UnityEngine::Vector3 gridSizeWS, ::UnityEngine::Vector3 gridCenterWS)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_GPUGRASSPROXY_GROUPDATA__CTOR_OFFSET))(this, gridSizeWS, gridCenterWS);
		}

		::System::Void ResetBoundBox(::UnityEngine::Vector3 gridSizeWS, ::UnityEngine::Vector3 gridCenterWS)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_GPUGRASSPROXY_GROUPDATA_RESETBOUNDBOX_OFFSET))(this, gridSizeWS, gridCenterWS);
		}

		::System::Void AddToList(::System::Int32 index, ::UnityEngine::Rendering::Universal::GPUGrassProxy_GroupData*& data)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Rendering::Universal::GPUGrassProxy_GroupData*&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_GPUGRASSPROXY_GROUPDATA_ADDTOLIST_OFFSET))(this, index, data);
		}

		::System::Void AddToList_1(::System::Int32 index, ::UnityEngine::Rendering::Universal::CachedGrassRenderItemData& data, ::UnityEngine::Matrix4x4& localToWorldMatrix, ::UnityEngine::Vector3 boundCenter, ::UnityEngine::Vector3 boundSize)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Rendering::Universal::CachedGrassRenderItemData&, ::UnityEngine::Matrix4x4&, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_GPUGRASSPROXY_GROUPDATA_ADDTOLIST_1_OFFSET))(this, index, data, localToWorldMatrix, boundCenter, boundSize);
		}

		::System::Void ExtendBound(::UnityEngine::Vector3 extraBoundCenter, ::UnityEngine::Vector3 extraBoundSize)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_GPUGRASSPROXY_GROUPDATA_EXTENDBOUND_OFFSET))(this, extraBoundCenter, extraBoundSize);
		}

		::System::Boolean get_IsVisible()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_GPUGRASSPROXY_GROUPDATA_GET_ISVISIBLE_OFFSET))(this);
		}

		::System::Void set_IsVisible(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_GPUGRASSPROXY_GROUPDATA_SET_ISVISIBLE_OFFSET))(this, value);
		}

		::System::Boolean CheckFrustumVisibleForL2Group(::Il2CppArray<::UnityEngine::Plane>* planes, ::UnityEngine::Vector3 cameraPositionWS, ::System::Boolean distanceCullEnable, ::System::Single cullingDistanceSqr)
		{
			return ((::System::Boolean(*)(::PVOID, ::Il2CppArray<::UnityEngine::Plane>*, ::UnityEngine::Vector3, ::System::Boolean, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_GPUGRASSPROXY_GROUPDATA_CHECKFRUSTUMVISIBLEFORL2GROUP_OFFSET))(this, planes, cameraPositionWS, distanceCullEnable, cullingDistanceSqr);
		}

		::System::Boolean CheckGroupVisible(::Il2CppArray<::UnityEngine::Plane>* planes, ::UnityEngine::Vector3 cameraPositionWS, ::System::Boolean distanceCullEnable, ::System::Single cullingDistanceSqr, ::System::Single cullingDistanceLod1Sqr, ::System::Single cullingDistanceLod2Sqr)
		{
			return ((::System::Boolean(*)(::PVOID, ::Il2CppArray<::UnityEngine::Plane>*, ::UnityEngine::Vector3, ::System::Boolean, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_GPUGRASSPROXY_GROUPDATA_CHECKGROUPVISIBLE_OFFSET))(this, planes, cameraPositionWS, distanceCullEnable, cullingDistanceSqr, cullingDistanceLod1Sqr, cullingDistanceLod2Sqr);
		}

		static ::System::Void _ResetBoundBox_g__ExtentSize_4_0(::UnityEngine::Vector3 v, ::UnityEngine::Rendering::Universal::GPUGrassProxy_GroupData___c__DisplayClass4_0& a2)
		{
			return ((::System::Void(*)(::UnityEngine::Vector3, ::UnityEngine::Rendering::Universal::GPUGrassProxy_GroupData___c__DisplayClass4_0&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_GPUGRASSPROXY_GROUPDATA__RESETBOUNDBOX_G__EXTENTSIZE_4_0_OFFSET))(v, a2);
		}
	};
}
