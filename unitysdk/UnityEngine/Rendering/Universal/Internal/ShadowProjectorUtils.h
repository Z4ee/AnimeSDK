#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Bounds.h"
#include "unitysdk/UnityEngine/Matrix4x4.h"
#include "unitysdk/UnityEngine/Plane.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Rendering/Universal/Internal/ShadowProjector_SliceData_SliceDataPerFrame.h"
#include "unitysdk/UnityEngine/Vector2Int.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace UnityEngine::Rendering::Universal::Internal { class ShadowProjector_SliceData; }

#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_SHADOWPROJECTORUTILS_GETBOUNDSBACKCENTERPOSITION_OFFSET UNITYSDK_OFFSET(0x1CB165A0)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_SHADOWPROJECTORUTILS_GETCORNERSFROMBOUNDS_OFFSET UNITYSDK_OFFSET(0x1CB15060)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_SHADOWPROJECTORUTILS_GETENCAPSULATEDBOUNDSINSPACE_1_OFFSET UNITYSDK_OFFSET(0x1CB153C0)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_SHADOWPROJECTORUTILS_GETENCAPSULATEDBOUNDSINSPACE_OFFSET UNITYSDK_OFFSET(0x1CB15230)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_SHADOWPROJECTORUTILS_GETOBJECTBOUNDSINWORLDSPACE_OFFSET UNITYSDK_OFFSET(0x1CB14C40)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_SHADOWPROJECTORUTILS_GETSHADOWVIEWTOCLIPMATRIX_OFFSET UNITYSDK_OFFSET(0x1CB16650)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_SHADOWPROJECTORUTILS_GETWORLDTOSHADOWVIEWMATRIX_OFFSET UNITYSDK_OFFSET(0x1CB162B0)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_SHADOWPROJECTORUTILS_MAKEMAX_OFFSET UNITYSDK_OFFSET(0x1CB16240)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_SHADOWPROJECTORUTILS_MAKEMIN_OFFSET UNITYSDK_OFFSET(0x1CB161D0)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_SHADOWPROJECTORUTILS_UPDATESLICEDATA_BEFORECULLING_OFFSET UNITYSDK_OFFSET(0x1CB16C40)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_SHADOWPROJECTORUTILS_UPDATESLICEDATA_PREPARERESOLVEDATA_OFFSET UNITYSDK_OFFSET(0x1CB16790)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_SHADOWPROJECTORUTILS_UPDATESLICEDATA_RETRIEVESCENEDATA_OFFSET UNITYSDK_OFFSET(0x1CB16B90)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_SHADOWPROJECTORUTILS__CCTOR_OFFSET UNITYSDK_OFFSET(0x1CB17270)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_SHADOWPROJECTORUTILS__CTOR_OFFSET UNITYSDK_OFFSET(0x1CB17260)

namespace UnityEngine::Rendering::Universal::Internal
{
	inline static constexpr unsigned int ShadowProjectorUtils_TypeDefinitionIndex = 27952;

	class ShadowProjectorUtils : public ::System::Object
	{
	public:
		static ::Il2CppArray<::UnityEngine::Vector3>** StaticGet_globalTempCubeCorners()
		{
			return (::Il2CppArray<::UnityEngine::Vector3>**)Il2CppClass::FromTypeDefinitionIndex(ShadowProjectorUtils_TypeDefinitionIndex)->GetStaticField(0x238A0);
		}
		static ::Il2CppArray<::UnityEngine::Plane>** StaticGet_globalCameraFrustumPlanes()
		{
			return (::Il2CppArray<::UnityEngine::Plane>**)Il2CppClass::FromTypeDefinitionIndex(ShadowProjectorUtils_TypeDefinitionIndex)->GetStaticField(0x238A8);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_SHADOWPROJECTORUTILS__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_SHADOWPROJECTORUTILS__CCTOR_OFFSET))();
		}

		static ::UnityEngine::Bounds GetObjectBoundsInWorldSpace(::UnityEngine::Rendering::Universal::Internal::ShadowProjector_SliceData* sliceData)
		{
			return ((::UnityEngine::Bounds(*)(::UnityEngine::Rendering::Universal::Internal::ShadowProjector_SliceData*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_SHADOWPROJECTORUTILS_GETOBJECTBOUNDSINWORLDSPACE_OFFSET))(sliceData);
		}

		static ::System::Void GetCornersFromBounds(::UnityEngine::Bounds bounds, ::Il2CppArray<::UnityEngine::Vector3>* outCorners)
		{
			return ((::System::Void(*)(::UnityEngine::Bounds, ::Il2CppArray<::UnityEngine::Vector3>*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_SHADOWPROJECTORUTILS_GETCORNERSFROMBOUNDS_OFFSET))(bounds, outCorners);
		}

		static ::UnityEngine::Bounds GetEncapsulatedBoundsInSpace(::UnityEngine::Bounds bounds, ::UnityEngine::Matrix4x4 transformMatrix)
		{
			return ((::UnityEngine::Bounds(*)(::UnityEngine::Bounds, ::UnityEngine::Matrix4x4))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_SHADOWPROJECTORUTILS_GETENCAPSULATEDBOUNDSINSPACE_OFFSET))(bounds, transformMatrix);
		}

		static ::UnityEngine::Bounds GetEncapsulatedBoundsInSpace_1(::Il2CppArray<::UnityEngine::Vector3>* corners, ::UnityEngine::Matrix4x4 transformMatrix)
		{
			return ((::UnityEngine::Bounds(*)(::Il2CppArray<::UnityEngine::Vector3>*, ::UnityEngine::Matrix4x4))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_SHADOWPROJECTORUTILS_GETENCAPSULATEDBOUNDSINSPACE_1_OFFSET))(corners, transformMatrix);
		}

		static ::System::Void MakeMin(::UnityEngine::Vector3& src, ::UnityEngine::Vector3& vec)
		{
			return ((::System::Void(*)(::UnityEngine::Vector3&, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_SHADOWPROJECTORUTILS_MAKEMIN_OFFSET))(src, vec);
		}

		static ::System::Void MakeMax(::UnityEngine::Vector3& src, ::UnityEngine::Vector3& vec)
		{
			return ((::System::Void(*)(::UnityEngine::Vector3&, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_SHADOWPROJECTORUTILS_MAKEMAX_OFFSET))(src, vec);
		}

		static ::UnityEngine::Matrix4x4 GetWorldToShadowViewMatrix(::UnityEngine::Vector3 centerWS, ::UnityEngine::Quaternion lightRotation)
		{
			return ((::UnityEngine::Matrix4x4(*)(::UnityEngine::Vector3, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_SHADOWPROJECTORUTILS_GETWORLDTOSHADOWVIEWMATRIX_OFFSET))(centerWS, lightRotation);
		}

		static ::UnityEngine::Vector3 GetBoundsBackCenterPosition(::UnityEngine::Bounds b)
		{
			return ((::UnityEngine::Vector3(*)(::UnityEngine::Bounds))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_SHADOWPROJECTORUTILS_GETBOUNDSBACKCENTERPOSITION_OFFSET))(b);
		}

		static ::UnityEngine::Matrix4x4 GetShadowViewToClipMatrix(::UnityEngine::Vector3 extents)
		{
			return ((::UnityEngine::Matrix4x4(*)(::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_SHADOWPROJECTORUTILS_GETSHADOWVIEWTOCLIPMATRIX_OFFSET))(extents);
		}

		static ::System::Void UpdateSliceData_PrepareResolveData(::UnityEngine::Rendering::Universal::Internal::ShadowProjector_SliceData_SliceDataPerFrame& data, ::UnityEngine::Vector2Int atlasResolution)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::Universal::Internal::ShadowProjector_SliceData_SliceDataPerFrame&, ::UnityEngine::Vector2Int))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_SHADOWPROJECTORUTILS_UPDATESLICEDATA_PREPARERESOLVEDATA_OFFSET))(data, atlasResolution);
		}

		static ::System::Void UpdateSliceData_RetrieveSceneData(::UnityEngine::Rendering::Universal::Internal::ShadowProjector_SliceData* sliceData)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::Universal::Internal::ShadowProjector_SliceData*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_SHADOWPROJECTORUTILS_UPDATESLICEDATA_RETRIEVESCENEDATA_OFFSET))(sliceData);
		}

		static ::System::Void UpdateSliceData_BeforeCulling(::UnityEngine::Rendering::Universal::Internal::ShadowProjector_SliceData_SliceDataPerFrame& data, ::UnityEngine::Quaternion lightRotation, ::System::Single padding, ::System::Single frustumExtend)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::Universal::Internal::ShadowProjector_SliceData_SliceDataPerFrame&, ::UnityEngine::Quaternion, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_SHADOWPROJECTORUTILS_UPDATESLICEDATA_BEFORECULLING_OFFSET))(data, lightRotation, padding, frustumExtend);
		}
	};
}
