#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Func_1; }
namespace Unity::Collections { template <typename T> class ManagedBlockQueue_1___c; }

namespace Unity::Collections
{
	inline static constexpr unsigned int ManagedBlockQueue_1___c_TypeDefinitionIndex = 18457;

	template <typename T>
	class ManagedBlockQueue_1___c : public ::System::Object
	{
	public:
		static ::Unity::Collections::ManagedBlockQueue_1___c<T>** StaticGet___9()
		{
			return (::Unity::Collections::ManagedBlockQueue_1___c<T>**)Il2CppClass::FromTypeDefinitionIndex(ManagedBlockQueue_1___c_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		static ::System::Func_1<::System::Int32>** StaticGet___9__16_0()
		{
			return (::System::Func_1<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(ManagedBlockQueue_1___c_TypeDefinitionIndex)->GetStaticField(0x0);
		}
	};
}
