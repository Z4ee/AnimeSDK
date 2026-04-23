#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

namespace System { class Type; }

#define UNITYENGINE_FORMATS_ALEMBIC_UTIL_CAPTURETARGET_GET_COMPONENTTYPE_OFFSET UNITYSDK_OFFSET(0x1A1E9B50)
#define UNITYENGINE_FORMATS_ALEMBIC_UTIL_CAPTURETARGET_SET_COMPONENTTYPE_OFFSET UNITYSDK_OFFSET(0x1A1E9B60)
#define UNITYENGINE_FORMATS_ALEMBIC_UTIL_CAPTURETARGET__CTOR_OFFSET UNITYSDK_OFFSET(0x1A1E9B70)

namespace UnityEngine::Formats::Alembic::Util
{
	inline static constexpr unsigned int CaptureTarget_TypeDefinitionIndex = 40752;

	class CaptureTarget : public ::System::Attribute
	{
	public:
		::System::Type* _componentType_k__BackingField; // 0x10

		::System::Void _ctor(::System::Type* t)
		{
			return ((::System::Void(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_UTIL_CAPTURETARGET__CTOR_OFFSET))(this, t);
		}

		::System::Type* get_componentType()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_UTIL_CAPTURETARGET_GET_COMPONENTTYPE_OFFSET))(this);
		}

		::System::Void set_componentType(::System::Type* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_UTIL_CAPTURETARGET_SET_COMPONENTTYPE_OFFSET))(this, value);
		}
	};
}
