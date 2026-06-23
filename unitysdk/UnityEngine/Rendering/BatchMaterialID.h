#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }

#define UNITYENGINE_RENDERING_BATCHMATERIALID_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x6DBDC0)
#define UNITYENGINE_RENDERING_BATCHMATERIALID_EQUALS_OFFSET UNITYSDK_OFFSET(0xA05BA0)
#define UNITYENGINE_RENDERING_BATCHMATERIALID_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x2B68B0)
#define UNITYENGINE_RENDERING_BATCHMATERIALID__CCTOR_OFFSET UNITYSDK_OFFSET(0x1D678AB0)

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int BatchMaterialID_TypeDefinitionIndex = 6206;

	struct alignas(4) BatchMaterialID
	{
		static ::UnityEngine::Rendering::BatchMaterialID* StaticGet_Null()
		{
			return (::UnityEngine::Rendering::BatchMaterialID*)Il2CppClass::FromTypeDefinitionIndex(BatchMaterialID_TypeDefinitionIndex)->GetStaticField(0x2ED0);
		}
		::System::UInt32 value; // 0x10

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BATCHMATERIALID__CCTOR_OFFSET))();
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BATCHMATERIALID_GETHASHCODE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* obj)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BATCHMATERIALID_EQUALS_OFFSET))(this, obj);
		}

		::System::Boolean Equals_1(::UnityEngine::Rendering::BatchMaterialID other)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Rendering::BatchMaterialID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BATCHMATERIALID_EQUALS_1_OFFSET))(this, other);
		}
	};
}
