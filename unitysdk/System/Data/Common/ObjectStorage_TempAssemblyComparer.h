#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"
#include "unitysdk/System/Object.h"

namespace System { class Type; }
namespace System::Collections::Generic { template <typename T> class IEqualityComparer_1; }
namespace System::Xml::Serialization { class XmlRootAttribute; }

#define SYSTEM_DATA_COMMON_OBJECTSTORAGE_TEMPASSEMBLYCOMPARER_EQUALS_OFFSET UNITYSDK_OFFSET(0x1DBD0380)
#define SYSTEM_DATA_COMMON_OBJECTSTORAGE_TEMPASSEMBLYCOMPARER_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1DBD0540)
#define SYSTEM_DATA_COMMON_OBJECTSTORAGE_TEMPASSEMBLYCOMPARER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1DBD0620)
#define SYSTEM_DATA_COMMON_OBJECTSTORAGE_TEMPASSEMBLYCOMPARER__CTOR_OFFSET UNITYSDK_OFFSET(0x1DBD0370)

namespace System::Data::Common
{
	inline static constexpr unsigned int ObjectStorage_TempAssemblyComparer_TypeDefinitionIndex = 38750;

	class ObjectStorage_TempAssemblyComparer : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::IEqualityComparer_1<::System::Collections::Generic::KeyValuePair_2<::System::Type*, ::System::Xml::Serialization::XmlRootAttribute*>>** StaticGet_s_default()
		{
			return (::System::Collections::Generic::IEqualityComparer_1<::System::Collections::Generic::KeyValuePair_2<::System::Type*, ::System::Xml::Serialization::XmlRootAttribute*>>**)Il2CppClass::FromTypeDefinitionIndex(ObjectStorage_TempAssemblyComparer_TypeDefinitionIndex)->GetStaticField(0x290A0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_COMMON_OBJECTSTORAGE_TEMPASSEMBLYCOMPARER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_DATA_COMMON_OBJECTSTORAGE_TEMPASSEMBLYCOMPARER__CCTOR_OFFSET))();
		}

		::System::Boolean Equals(::System::Collections::Generic::KeyValuePair_2<::System::Type*, ::System::Xml::Serialization::XmlRootAttribute*> x, ::System::Collections::Generic::KeyValuePair_2<::System::Type*, ::System::Xml::Serialization::XmlRootAttribute*> y)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Collections::Generic::KeyValuePair_2<::System::Type*, ::System::Xml::Serialization::XmlRootAttribute*>, ::System::Collections::Generic::KeyValuePair_2<::System::Type*, ::System::Xml::Serialization::XmlRootAttribute*>))((::PBYTE)hIl2Cpp + SYSTEM_DATA_COMMON_OBJECTSTORAGE_TEMPASSEMBLYCOMPARER_EQUALS_OFFSET))(this, x, y);
		}

		::System::Int32 GetHashCode(::System::Collections::Generic::KeyValuePair_2<::System::Type*, ::System::Xml::Serialization::XmlRootAttribute*> obj)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Collections::Generic::KeyValuePair_2<::System::Type*, ::System::Xml::Serialization::XmlRootAttribute*>))((::PBYTE)hIl2Cpp + SYSTEM_DATA_COMMON_OBJECTSTORAGE_TEMPASSEMBLYCOMPARER_GETHASHCODE_OFFSET))(this, obj);
		}
	};
}
