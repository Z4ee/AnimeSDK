#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Bounds.h"
#include "unitysdk/UnityEngine/Plane.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::Rendering::Universal { class UniversalAdditionalLightData; }

#define UNITYENGINE_RENDERING_UNIVERSAL_LIGHTUTILS_AUTOGETBOUNDS_OFFSET UNITYSDK_OFFSET(0x1B896950)
#define UNITYENGINE_RENDERING_UNIVERSAL_LIGHTUTILS_CALCULATEAABB_OFFSET UNITYSDK_OFFSET(0x1B898990)
#define UNITYENGINE_RENDERING_UNIVERSAL_LIGHTUTILS_CALCULATEBOUNDS_OFFSET UNITYSDK_OFFSET(0x1B899460)
#define UNITYENGINE_RENDERING_UNIVERSAL_LIGHTUTILS_CHECKINTERSECTION_OFFSET UNITYSDK_OFFSET(0x1B8988A0)
#define UNITYENGINE_RENDERING_UNIVERSAL_LIGHTUTILS_CONSTRAINBOUNDSTOPLANE_OFFSET UNITYSDK_OFFSET(0x1B898330)
#define UNITYENGINE_RENDERING_UNIVERSAL_LIGHTUTILS_GETBOUNDSCORNERS_OFFSET UNITYSDK_OFFSET(0x1B899200)
#define UNITYENGINE_RENDERING_UNIVERSAL_LIGHTUTILS_GETTOPMOSTPARENT_OFFSET UNITYSDK_OFFSET(0x1B898710)
#define UNITYENGINE_RENDERING_UNIVERSAL_LIGHTUTILS__CTOR_OFFSET UNITYSDK_OFFSET(0x1B8998C0)

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int LightUtils_TypeDefinitionIndex = 26437;

	class LightUtils : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_LIGHTUTILS__CTOR_OFFSET))(this);
		}

		static ::System::Void AutoGetBounds(::UnityEngine::Rendering::Universal::UniversalAdditionalLightData* lightData, ::System::Boolean forceRefresh)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::Universal::UniversalAdditionalLightData*, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_LIGHTUTILS_AUTOGETBOUNDS_OFFSET))(lightData, forceRefresh);
		}

		static ::UnityEngine::Transform* GetTopMostParent(::UnityEngine::Transform* child)
		{
			return ((::UnityEngine::Transform*(*)(::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_LIGHTUTILS_GETTOPMOSTPARENT_OFFSET))(child);
		}

		static ::System::Boolean CheckIntersection(::UnityEngine::Transform* boxTransform, ::Il2CppArray<::UnityEngine::Bounds>* boundsArray)
		{
			return ((::System::Boolean(*)(::UnityEngine::Transform*, ::Il2CppArray<::UnityEngine::Bounds>*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_LIGHTUTILS_CHECKINTERSECTION_OFFSET))(boxTransform, boundsArray);
		}

		static ::System::Collections::Generic::List_1<::UnityEngine::Bounds>* ConstrainBoundsToPlane(::Il2CppArray<::UnityEngine::Bounds>* boundsArray, ::UnityEngine::Plane plane)
		{
			return ((::System::Collections::Generic::List_1<::UnityEngine::Bounds>*(*)(::Il2CppArray<::UnityEngine::Bounds>*, ::UnityEngine::Plane))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_LIGHTUTILS_CONSTRAINBOUNDSTOPLANE_OFFSET))(boundsArray, plane);
		}

		static ::UnityEngine::Bounds CalculateAABB(::UnityEngine::Transform* transform)
		{
			return ((::UnityEngine::Bounds(*)(::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_LIGHTUTILS_CALCULATEAABB_OFFSET))(transform);
		}

		static ::System::Collections::Generic::List_1<::UnityEngine::Vector3>* GetBoundsCorners(::UnityEngine::Bounds bounds)
		{
			return ((::System::Collections::Generic::List_1<::UnityEngine::Vector3>*(*)(::UnityEngine::Bounds))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_LIGHTUTILS_GETBOUNDSCORNERS_OFFSET))(bounds);
		}

		static ::UnityEngine::Bounds CalculateBounds(::UnityEngine::Bounds originalBounds, ::UnityEngine::Plane plane, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>* corners)
		{
			return ((::UnityEngine::Bounds(*)(::UnityEngine::Bounds, ::UnityEngine::Plane, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_LIGHTUTILS_CALCULATEBOUNDS_OFFSET))(originalBounds, plane, corners);
		}
	};
}
