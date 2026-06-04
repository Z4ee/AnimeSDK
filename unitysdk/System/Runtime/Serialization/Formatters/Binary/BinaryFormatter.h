#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Runtime/Serialization/Formatters/FormatterAssemblyStyle.h"
#include "unitysdk/System/Runtime/Serialization/Formatters/FormatterTypeStyle.h"
#include "unitysdk/System/Runtime/Serialization/Formatters/TypeFilterLevel.h"
#include "unitysdk/System/Runtime/Serialization/StreamingContext.h"

namespace System { class Type; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::IO { class Stream; }
namespace System::Runtime::Remoting::Messaging { class Header; }
namespace System::Runtime::Remoting::Messaging { class HeaderHandler; }
namespace System::Runtime::Serialization { class ISurrogateSelector; }
namespace System::Runtime::Serialization { class SerializationBinder; }
namespace System::Runtime::Serialization::Formatters::Binary { class TypeInformation; }

#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_BINARYFORMATTER_DESERIALIZE_1_OFFSET UNITYSDK_OFFSET(0x187AA6F0)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_BINARYFORMATTER_DESERIALIZE_2_OFFSET UNITYSDK_OFFSET(0x187AA6E0)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_BINARYFORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x187A2BC0)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_BINARYFORMATTER_GETTYPEINFORMATION_OFFSET UNITYSDK_OFFSET(0x187AB690)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_BINARYFORMATTER_SERIALIZE_1_OFFSET UNITYSDK_OFFSET(0x187AAE10)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_BINARYFORMATTER_SERIALIZE_2_OFFSET UNITYSDK_OFFSET(0x187AAE30)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_BINARYFORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x187A2910)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_BINARYFORMATTER_SET_ASSEMBLYFORMAT_OFFSET UNITYSDK_OFFSET(0x187AA690)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_BINARYFORMATTER_SET_SURROGATESELECTOR_OFFSET UNITYSDK_OFFSET(0x187AA6A0)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_BINARYFORMATTER__CCTOR_OFFSET UNITYSDK_OFFSET(0x187AB950)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_BINARYFORMATTER__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1879FEA0)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_BINARYFORMATTER__CTOR_OFFSET UNITYSDK_OFFSET(0x187AA6B0)

namespace System::Runtime::Serialization::Formatters::Binary
{
	inline static constexpr unsigned int BinaryFormatter_TypeDefinitionIndex = 1170;

	class BinaryFormatter : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::System::Type*, ::System::Runtime::Serialization::Formatters::Binary::TypeInformation*>** StaticGet_typeNameCache()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::Type*, ::System::Runtime::Serialization::Formatters::Binary::TypeInformation*>**)Il2CppClass::FromTypeDefinitionIndex(BinaryFormatter_TypeDefinitionIndex)->GetStaticField(0xC940);
		}
		::System::Runtime::Serialization::StreamingContext m_context; // 0x10
		::System::Runtime::Serialization::ISurrogateSelector* m_surrogates; // 0x20
		::Il2CppArray<::System::Object*>* m_crossAppDomainArray; // 0x28
		::System::Runtime::Serialization::SerializationBinder* m_binder; // 0x30
		::System::Runtime::Serialization::Formatters::FormatterTypeStyle m_typeFormat; // 0x38
		::System::Runtime::Serialization::Formatters::TypeFilterLevel m_securityLevel; // 0x3C
		::System::Runtime::Serialization::Formatters::FormatterAssemblyStyle m_assemblyFormat; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_BINARYFORMATTER__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::Runtime::Serialization::ISurrogateSelector* a1, ::System::Runtime::Serialization::StreamingContext a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::ISurrogateSelector*, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_BINARYFORMATTER__CTOR_1_OFFSET))(this, a1, a2);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_BINARYFORMATTER__CCTOR_OFFSET))();
		}

		::System::Void set_AssemblyFormat(::System::Runtime::Serialization::Formatters::FormatterAssemblyStyle a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::Formatters::FormatterAssemblyStyle))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_BINARYFORMATTER_SET_ASSEMBLYFORMAT_OFFSET))(this, a1);
		}

		::System::Void set_SurrogateSelector(::System::Runtime::Serialization::ISurrogateSelector* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::ISurrogateSelector*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_BINARYFORMATTER_SET_SURROGATESELECTOR_OFFSET))(this, a1);
		}

		::System::Object* Deserialize(::System::IO::Stream* a1)
		{
			return ((::System::Object*(*)(::PVOID, ::System::IO::Stream*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_BINARYFORMATTER_DESERIALIZE_OFFSET))(this, a1);
		}

		::System::Object* Deserialize_1(::System::IO::Stream* a1, ::System::Runtime::Remoting::Messaging::HeaderHandler* a2, ::System::Boolean a3)
		{
			return ((::System::Object*(*)(::PVOID, ::System::IO::Stream*, ::System::Runtime::Remoting::Messaging::HeaderHandler*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_BINARYFORMATTER_DESERIALIZE_1_OFFSET))(this, a1, a2, a3);
		}

		::System::Object* Deserialize_2(::System::IO::Stream* a1, ::System::Runtime::Remoting::Messaging::HeaderHandler* a2)
		{
			return ((::System::Object*(*)(::PVOID, ::System::IO::Stream*, ::System::Runtime::Remoting::Messaging::HeaderHandler*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_BINARYFORMATTER_DESERIALIZE_2_OFFSET))(this, a1, a2);
		}

		::System::Void Serialize(::System::IO::Stream* a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::IO::Stream*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_BINARYFORMATTER_SERIALIZE_OFFSET))(this, a1, a2);
		}

		::System::Void Serialize_1(::System::IO::Stream* a1, ::System::Object* a2, ::Il2CppArray<::System::Runtime::Remoting::Messaging::Header*>* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::IO::Stream*, ::System::Object*, ::Il2CppArray<::System::Runtime::Remoting::Messaging::Header*>*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_BINARYFORMATTER_SERIALIZE_1_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Serialize_2(::System::IO::Stream* a1, ::System::Object* a2, ::Il2CppArray<::System::Runtime::Remoting::Messaging::Header*>* a3, ::System::Boolean a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::IO::Stream*, ::System::Object*, ::Il2CppArray<::System::Runtime::Remoting::Messaging::Header*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_BINARYFORMATTER_SERIALIZE_2_OFFSET))(this, a1, a2, a3, a4);
		}

		static ::System::Runtime::Serialization::Formatters::Binary::TypeInformation* GetTypeInformation(::System::Type* a1)
		{
			return ((::System::Runtime::Serialization::Formatters::Binary::TypeInformation*(*)(::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_BINARYFORMATTER_GETTYPEINFORMATION_OFFSET))(a1);
		}
	};
}
