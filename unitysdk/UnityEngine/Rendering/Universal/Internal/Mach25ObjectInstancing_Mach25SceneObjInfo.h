#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Matrix4x4.h"

namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Mesh; }

#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_MACH25OBJECTINSTANCING_MACH25SCENEOBJINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x191108B0)

namespace UnityEngine::Rendering::Universal::Internal
{
	inline static constexpr unsigned int Mach25ObjectInstancing_Mach25SceneObjInfo_TypeDefinitionIndex = 30373;

	class Mach25ObjectInstancing_Mach25SceneObjInfo : public ::System::Object
	{
	public:
		::UnityEngine::Mesh* mesh; // 0x10
		::System::Collections::Generic::List_1<::UnityEngine::Matrix4x4>* matrices; // 0x18
		::UnityEngine::Material* material; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_MACH25OBJECTINSTANCING_MACH25SCENEOBJINFO__CTOR_OFFSET))(this);
		}
	};
}
