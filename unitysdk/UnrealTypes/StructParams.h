#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnrealTypes/StructFlags.h"

namespace System { class String; }
namespace System { class Type; }
namespace System { template <typename T> class Func_1; }
namespace UnrealTypes { class ICppStructOps; }
namespace UnrealTypes { class PropertyParamsBase; }
namespace UnrealTypes { class ScriptStruct; }

#define UNREALTYPES_STRUCTPARAMS__CTOR_OFFSET UNITYSDK_OFFSET(0x1D1AB3E0)

namespace UnrealTypes
{
	inline static constexpr unsigned int StructParams_TypeDefinitionIndex = 27752;

	class StructParams : public ::System::Object
	{
	public:
		::UnrealTypes::ScriptStruct* Super; // 0x10
		::System::Type* Type; // 0x18
		::System::String* Namespace; // 0x20
		::System::Object* VirtualProxy; // 0x28
		::Il2CppArray<::UnrealTypes::PropertyParamsBase*>* PropertyArray; // 0x30
		::System::Func_1<::UnrealTypes::ICppStructOps*>* StructOpsFunc; // 0x38
		::System::String* Name; // 0x40
		::System::Int32 AlignOf; // 0x48
		::System::Int32 SizeOf; // 0x4C
		::UnrealTypes::StructFlags StructFlags; // 0x50
		::System::UInt32 TypeId; // 0x54

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNREALTYPES_STRUCTPARAMS__CTOR_OFFSET))(this);
		}
	};
}
