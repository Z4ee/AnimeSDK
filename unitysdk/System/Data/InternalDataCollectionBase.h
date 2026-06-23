#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Array; }
namespace System { class String; }
namespace System::Collections { class ArrayList; }
namespace System::Collections { class IEnumerator; }
namespace System::ComponentModel { class CollectionChangeEventArgs; }
namespace System::Globalization { class CultureInfo; }

#define SYSTEM_DATA_INTERNALDATACOLLECTIONBASE_COPYTO_OFFSET UNITYSDK_OFFSET(0x1E0AE910)
#define SYSTEM_DATA_INTERNALDATACOLLECTIONBASE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1E0AE960)
#define SYSTEM_DATA_INTERNALDATACOLLECTIONBASE_GET_COUNT_OFFSET UNITYSDK_OFFSET(0x1E0AE8D0)
#define SYSTEM_DATA_INTERNALDATACOLLECTIONBASE_GET_ISSYNCHRONIZED_OFFSET UNITYSDK_OFFSET(0x1E0AE990)
#define SYSTEM_DATA_INTERNALDATACOLLECTIONBASE_GET_LIST_OFFSET UNITYSDK_OFFSET(0x1E0AEAB0)
#define SYSTEM_DATA_INTERNALDATACOLLECTIONBASE_GET_SYNCROOT_OFFSET UNITYSDK_OFFSET(0x1E0AEAA0)
#define SYSTEM_DATA_INTERNALDATACOLLECTIONBASE_NAMESEQUAL_OFFSET UNITYSDK_OFFSET(0x1E0AE9A0)
#define SYSTEM_DATA_INTERNALDATACOLLECTIONBASE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1E0AEAD0)
#define SYSTEM_DATA_INTERNALDATACOLLECTIONBASE__CTOR_OFFSET UNITYSDK_OFFSET(0x1E0AEAC0)

namespace System::Data
{
	inline static constexpr unsigned int InternalDataCollectionBase_TypeDefinitionIndex = 38554;

	class InternalDataCollectionBase : public ::System::Object
	{
	public:
		static ::System::ComponentModel::CollectionChangeEventArgs** StaticGet_s_refreshEventArgs()
		{
			return (::System::ComponentModel::CollectionChangeEventArgs**)Il2CppClass::FromTypeDefinitionIndex(InternalDataCollectionBase_TypeDefinitionIndex)->GetStaticField(0x290B0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_INTERNALDATACOLLECTIONBASE__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_DATA_INTERNALDATACOLLECTIONBASE__CCTOR_OFFSET))();
		}

		::System::Int32 get_Count()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_INTERNALDATACOLLECTIONBASE_GET_COUNT_OFFSET))(this);
		}

		::System::Void CopyTo(::System::Array* ar, ::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::System::Array*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_DATA_INTERNALDATACOLLECTIONBASE_COPYTO_OFFSET))(this, ar, index);
		}

		::System::Collections::IEnumerator* GetEnumerator()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_INTERNALDATACOLLECTIONBASE_GETENUMERATOR_OFFSET))(this);
		}

		::System::Boolean get_IsSynchronized()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_INTERNALDATACOLLECTIONBASE_GET_ISSYNCHRONIZED_OFFSET))(this);
		}

		::System::Int32 NamesEqual(::System::String* s1, ::System::String* s2, ::System::Boolean fCaseSensitive, ::System::Globalization::CultureInfo* locale)
		{
			return ((::System::Int32(*)(::PVOID, ::System::String*, ::System::String*, ::System::Boolean, ::System::Globalization::CultureInfo*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_INTERNALDATACOLLECTIONBASE_NAMESEQUAL_OFFSET))(this, s1, s2, fCaseSensitive, locale);
		}

		::System::Object* get_SyncRoot()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_INTERNALDATACOLLECTIONBASE_GET_SYNCROOT_OFFSET))(this);
		}

		::System::Collections::ArrayList* get_List()
		{
			return ((::System::Collections::ArrayList*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_INTERNALDATACOLLECTIONBASE_GET_LIST_OFFSET))(this);
		}
	};
}
