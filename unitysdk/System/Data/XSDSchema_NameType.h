#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { class Type; }

#define SYSTEM_DATA_XSDSCHEMA_NAMETYPE_COMPARETO_OFFSET UNITYSDK_OFFSET(0x1D6DC890)
#define SYSTEM_DATA_XSDSCHEMA_NAMETYPE__CTOR_OFFSET UNITYSDK_OFFSET(0x1D6DC880)

namespace System::Data
{
	inline static constexpr unsigned int XSDSchema_NameType_TypeDefinitionIndex = 38693;

	class XSDSchema_NameType : public ::System::Object
	{
	public:
		::System::Type* type; // 0x10
		::System::String* name; // 0x18

		::System::Void _ctor(::System::String* n, ::System::Type* t)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_XSDSCHEMA_NAMETYPE__CTOR_OFFSET))(this, n, t);
		}

		::System::Int32 CompareTo(::System::Object* obj)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_XSDSCHEMA_NAMETYPE_COMPARETO_OFFSET))(this, obj);
		}
	};
}
