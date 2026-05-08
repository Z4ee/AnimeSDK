#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }
namespace System { class String; }

#define UNITYENGINE_XR_MESHID_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x9D8910)
#define UNITYENGINE_XR_MESHID_EQUALS_OFFSET UNITYSDK_OFFSET(0x9D88B0)
#define UNITYENGINE_XR_MESHID_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x924560)
#define UNITYENGINE_XR_MESHID_TOSTRING_OFFSET UNITYSDK_OFFSET(0x9D8800)
#define UNITYENGINE_XR_MESHID__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C4460F0)

namespace UnityEngine::XR
{
	inline static constexpr unsigned int MeshId_TypeDefinitionIndex = 25169;

	struct alignas(8) MeshId
	{
		static ::UnityEngine::XR::MeshId* StaticGet_s_InvalidId()
		{
			return (::UnityEngine::XR::MeshId*)Il2CppClass::FromTypeDefinitionIndex(MeshId_TypeDefinitionIndex)->GetStaticField(0x4760);
		}
		::System::UInt64 m_SubId1; // 0x10
		::System::UInt64 m_SubId2; // 0x18

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_XR_MESHID__CCTOR_OFFSET))();
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_XR_MESHID_TOSTRING_OFFSET))(this);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_XR_MESHID_GETHASHCODE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* obj)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_XR_MESHID_EQUALS_OFFSET))(this, obj);
		}

		::System::Boolean Equals_1(::UnityEngine::XR::MeshId other)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::XR::MeshId))((::PBYTE)hIl2Cpp + UNITYENGINE_XR_MESHID_EQUALS_1_OFFSET))(this, other);
		}
	};
}
