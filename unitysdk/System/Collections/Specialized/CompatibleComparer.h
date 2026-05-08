#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections { class IComparer; }
namespace System::Collections { class IHashCodeProvider; }

#define SYSTEM_COLLECTIONS_SPECIALIZED_COMPATIBLECOMPARER_EQUALS_OFFSET UNITYSDK_OFFSET(0x1938F200)
#define SYSTEM_COLLECTIONS_SPECIALIZED_COMPATIBLECOMPARER_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1938F450)
#define SYSTEM_COLLECTIONS_SPECIALIZED_COMPATIBLECOMPARER_GET_COMPARER_OFFSET UNITYSDK_OFFSET(0x1938F540)
#define SYSTEM_COLLECTIONS_SPECIALIZED_COMPATIBLECOMPARER_GET_DEFAULTCOMPARER_OFFSET UNITYSDK_OFFSET(0x1938F560)
#define SYSTEM_COLLECTIONS_SPECIALIZED_COMPATIBLECOMPARER_GET_DEFAULTHASHCODEPROVIDER_OFFSET UNITYSDK_OFFSET(0x1938F650)
#define SYSTEM_COLLECTIONS_SPECIALIZED_COMPATIBLECOMPARER_GET_HASHCODEPROVIDER_OFFSET UNITYSDK_OFFSET(0x1938F550)
#define SYSTEM_COLLECTIONS_SPECIALIZED_COMPATIBLECOMPARER__CTOR_OFFSET UNITYSDK_OFFSET(0x1938F1F0)

namespace System::Collections::Specialized
{
	inline static constexpr unsigned int CompatibleComparer_TypeDefinitionIndex = 3923;

	class CompatibleComparer : public ::System::Object
	{
	public:
		static ::System::Collections::IHashCodeProvider** StaticGet_defaultHashProvider()
		{
			return (::System::Collections::IHashCodeProvider**)Il2CppClass::FromTypeDefinitionIndex(CompatibleComparer_TypeDefinitionIndex)->GetStaticField(0x3280);
		}
		static ::System::Collections::IComparer** StaticGet_defaultComparer()
		{
			return (::System::Collections::IComparer**)Il2CppClass::FromTypeDefinitionIndex(CompatibleComparer_TypeDefinitionIndex)->GetStaticField(0x3288);
		}
		::System::Collections::IHashCodeProvider* _hcp; // 0x10
		::System::Collections::IComparer* _comparer; // 0x18

		::System::Void _ctor(::System::Collections::IComparer* comparer, ::System::Collections::IHashCodeProvider* hashCodeProvider)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::IComparer*, ::System::Collections::IHashCodeProvider*))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SPECIALIZED_COMPATIBLECOMPARER__CTOR_OFFSET))(this, comparer, hashCodeProvider);
		}

		::System::Boolean Equals(::System::Object* a, ::System::Object* b)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SPECIALIZED_COMPATIBLECOMPARER_EQUALS_OFFSET))(this, a, b);
		}

		::System::Int32 GetHashCode(::System::Object* obj)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SPECIALIZED_COMPATIBLECOMPARER_GETHASHCODE_OFFSET))(this, obj);
		}

		::System::Collections::IComparer* get_Comparer()
		{
			return ((::System::Collections::IComparer*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SPECIALIZED_COMPATIBLECOMPARER_GET_COMPARER_OFFSET))(this);
		}

		::System::Collections::IHashCodeProvider* get_HashCodeProvider()
		{
			return ((::System::Collections::IHashCodeProvider*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SPECIALIZED_COMPATIBLECOMPARER_GET_HASHCODEPROVIDER_OFFSET))(this);
		}

		static ::System::Collections::IComparer* get_DefaultComparer()
		{
			return ((::System::Collections::IComparer*(*)())((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SPECIALIZED_COMPATIBLECOMPARER_GET_DEFAULTCOMPARER_OFFSET))();
		}

		static ::System::Collections::IHashCodeProvider* get_DefaultHashCodeProvider()
		{
			return ((::System::Collections::IHashCodeProvider*(*)())((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SPECIALIZED_COMPATIBLECOMPARER_GET_DEFAULTHASHCODEPROVIDER_OFFSET))();
		}
	};
}
