#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/Unity/Collections/Allocator.h"
#include "unitysdk/UnrealTypes/TObjectHandle_1.h"

namespace UnrealTypes { class ScriptStruct; }
namespace UnrealTypes { class StructOpsTraitsBase; }
namespace UnrealTypes { template <typename T> class IStruct_1; }

namespace UnrealTypes
{
	inline static constexpr unsigned int Struct_1_TypeDefinitionIndex = 25215;

	template <typename T>
	class Struct_1 : public ::System::Object
	{
	public:
		static ::UnrealTypes::IStruct_1<T>** StaticGet__staticInstance()
		{
			return (::UnrealTypes::IStruct_1<T>**)Il2CppClass::FromTypeDefinitionIndex(Struct_1_TypeDefinitionIndex)->GetStaticField(0x0);
		}
	};
}
