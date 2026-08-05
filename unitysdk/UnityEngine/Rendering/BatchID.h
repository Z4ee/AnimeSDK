#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }

#define UNITYENGINE_RENDERING_BATCHID_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x826600)
#define UNITYENGINE_RENDERING_BATCHID_EQUALS_OFFSET UNITYSDK_OFFSET(0xA7FA60)
#define UNITYENGINE_RENDERING_BATCHID_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x325570)
#define UNITYENGINE_RENDERING_BATCHID__CCTOR_OFFSET UNITYSDK_OFFSET(0x1EDE6C70)

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int BatchID_TypeDefinitionIndex = 6209;

	struct alignas(4) BatchID
	{
		static ::UnityEngine::Rendering::BatchID* StaticGet_Null()
		{
			return (::UnityEngine::Rendering::BatchID*)Il2CppClass::FromTypeDefinitionIndex(BatchID_TypeDefinitionIndex)->GetStaticField(0x2E90);
		}
		::System::UInt32 value; // 0x10

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BATCHID__CCTOR_OFFSET))();
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BATCHID_GETHASHCODE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* obj)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BATCHID_EQUALS_OFFSET))(this, obj);
		}

		::System::Boolean Equals_1(::UnityEngine::Rendering::BatchID other)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Rendering::BatchID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BATCHID_EQUALS_1_OFFSET))(this, other);
		}
	};
}
