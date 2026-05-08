#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/Generic/EqualityComparer_1.h"

namespace System { class Object; }

#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_REFERENCEEQUALITYCOMPARER_EQUALS_OFFSET UNITYSDK_OFFSET(0x1B0889E0)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_REFERENCEEQUALITYCOMPARER_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1B088A40)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_REFERENCEEQUALITYCOMPARER__CTOR_OFFSET UNITYSDK_OFFSET(0x1B087C70)

namespace UnityEngine::Rendering::Universal::Internal
{
	inline static constexpr unsigned int ReferenceEqualityComparer_TypeDefinitionIndex = 30371;

	class ReferenceEqualityComparer : public ::System::Collections::Generic::EqualityComparer_1<::System::Object*>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_REFERENCEEQUALITYCOMPARER__CTOR_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* x, ::System::Object* y)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*, ::System::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_REFERENCEEQUALITYCOMPARER_EQUALS_OFFSET))(this, x, y);
		}

		::System::Int32 GetHashCode(::System::Object* obj)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_REFERENCEEQUALITYCOMPARER_GETHASHCODE_OFFSET))(this, obj);
		}
	};
}
