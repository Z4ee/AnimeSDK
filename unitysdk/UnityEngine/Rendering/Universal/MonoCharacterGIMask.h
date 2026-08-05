#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Bounds.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Ray.h"
#include "unitysdk/UnityEngine/RaycastHit.h"
#include "unitysdk/UnityEngine/Rendering/Universal/MonoCharacterGIMask_MaskType.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class BoxCollider; }

#define UNITYENGINE_RENDERING_UNIVERSAL_MONOCHARACTERGIMASK_BEGINOPERATE_1_OFFSET UNITYSDK_OFFSET(0x1D6EAB80)
#define UNITYENGINE_RENDERING_UNIVERSAL_MONOCHARACTERGIMASK_BEGINOPERATE_OFFSET UNITYSDK_OFFSET(0x1D6EA0A0)
#define UNITYENGINE_RENDERING_UNIVERSAL_MONOCHARACTERGIMASK_ENDOPERATE_1_OFFSET UNITYSDK_OFFSET(0x1D6EAD70)
#define UNITYENGINE_RENDERING_UNIVERSAL_MONOCHARACTERGIMASK_ENDOPERATE_OFFSET UNITYSDK_OFFSET(0x1D6EA9B0)
#define UNITYENGINE_RENDERING_UNIVERSAL_MONOCHARACTERGIMASK_FILTER_OFFSET UNITYSDK_OFFSET(0x1D6EAF60)
#define UNITYENGINE_RENDERING_UNIVERSAL_MONOCHARACTERGIMASK_GET_WORLDBOUNDS_OFFSET UNITYSDK_OFFSET(0x1D6EA070)
#define UNITYENGINE_RENDERING_UNIVERSAL_MONOCHARACTERGIMASK_RAYCAST_OFFSET UNITYSDK_OFFSET(0x1D6EAA40)
#define UNITYENGINE_RENDERING_UNIVERSAL_MONOCHARACTERGIMASK_SET_WORLDBOUNDS_OFFSET UNITYSDK_OFFSET(0x1D6EA090)
#define UNITYENGINE_RENDERING_UNIVERSAL_MONOCHARACTERGIMASK__CTOR_OFFSET UNITYSDK_OFFSET(0x1D6EB450)

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int MonoCharacterGIMask_TypeDefinitionIndex = 27836;

	class MonoCharacterGIMask : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::Bounds localBounds; // 0x18
		::UnityEngine::Rendering::Universal::MonoCharacterGIMask_MaskType maskType; // 0x30
		::UnityEngine::Bounds _WorldBounds_k__BackingField; // 0x34
		::UnityEngine::BoxCollider* _boxCollider; // 0x50

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_MONOCHARACTERGIMASK__CTOR_OFFSET))(this);
		}

		::UnityEngine::Bounds get_WorldBounds()
		{
			return ((::UnityEngine::Bounds(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_MONOCHARACTERGIMASK_GET_WORLDBOUNDS_OFFSET))(this);
		}

		::System::Void set_WorldBounds(::UnityEngine::Bounds value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Bounds))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_MONOCHARACTERGIMASK_SET_WORLDBOUNDS_OFFSET))(this, value);
		}

		::System::Void BeginOperate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_MONOCHARACTERGIMASK_BEGINOPERATE_OFFSET))(this);
		}

		::System::Void EndOperate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_MONOCHARACTERGIMASK_ENDOPERATE_OFFSET))(this);
		}

		::System::Boolean Raycast(::UnityEngine::Ray ray, ::UnityEngine::RaycastHit& hit, ::System::Single distance)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Ray, ::UnityEngine::RaycastHit&, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_MONOCHARACTERGIMASK_RAYCAST_OFFSET))(this, ray, hit, distance);
		}

		static ::System::Void BeginOperate_1(::System::Collections::Generic::List_1<::UnityEngine::Rendering::Universal::MonoCharacterGIMask*>* masks)
		{
			return ((::System::Void(*)(::System::Collections::Generic::List_1<::UnityEngine::Rendering::Universal::MonoCharacterGIMask*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_MONOCHARACTERGIMASK_BEGINOPERATE_1_OFFSET))(masks);
		}

		static ::System::Void EndOperate_1(::System::Collections::Generic::List_1<::UnityEngine::Rendering::Universal::MonoCharacterGIMask*>* masks)
		{
			return ((::System::Void(*)(::System::Collections::Generic::List_1<::UnityEngine::Rendering::Universal::MonoCharacterGIMask*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_MONOCHARACTERGIMASK_ENDOPERATE_1_OFFSET))(masks);
		}

		static ::System::Boolean Filter(::System::Collections::Generic::List_1<::UnityEngine::Rendering::Universal::MonoCharacterGIMask*>* masks, ::UnityEngine::Vector3 point)
		{
			return ((::System::Boolean(*)(::System::Collections::Generic::List_1<::UnityEngine::Rendering::Universal::MonoCharacterGIMask*>*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_MONOCHARACTERGIMASK_FILTER_OFFSET))(masks, point);
		}
	};
}
