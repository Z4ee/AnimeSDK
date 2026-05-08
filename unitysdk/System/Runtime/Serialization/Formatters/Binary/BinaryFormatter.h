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

#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_BINARYFORMATTER_DESERIALIZE_1_OFFSET UNITYSDK_OFFSET(0x1A6C5080)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_BINARYFORMATTER_DESERIALIZE_2_OFFSET UNITYSDK_OFFSET(0x1A6C5070)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_BINARYFORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1A6C0D00)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_BINARYFORMATTER_GETTYPEINFORMATION_OFFSET UNITYSDK_OFFSET(0x1A6C5430)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_BINARYFORMATTER_SERIALIZE_1_OFFSET UNITYSDK_OFFSET(0x1A6C5280)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_BINARYFORMATTER_SERIALIZE_2_OFFSET UNITYSDK_OFFSET(0x1A6C52A0)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_BINARYFORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x1A6C0A60)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_BINARYFORMATTER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A6C5710)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_BINARYFORMATTER__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1A6C5050)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_BINARYFORMATTER__CTOR_OFFSET UNITYSDK_OFFSET(0x1A6C0A30)

namespace System::Runtime::Serialization::Formatters::Binary
{
	inline static constexpr unsigned int BinaryFormatter_TypeDefinitionIndex = 1216;

	class BinaryFormatter : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::System::Type*, ::System::Runtime::Serialization::Formatters::Binary::TypeInformation*>** StaticGet_typeNameCache()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::Type*, ::System::Runtime::Serialization::Formatters::Binary::TypeInformation*>**)Il2CppClass::FromTypeDefinitionIndex(BinaryFormatter_TypeDefinitionIndex)->GetStaticField(0xA20);
		}
		::System::Runtime::Serialization::ISurrogateSelector* m_surrogates; // 0x10
		::Il2CppArray<::System::Object*>* m_crossAppDomainArray; // 0x18
		::System::Runtime::Serialization::SerializationBinder* m_binder; // 0x20
		::System::Runtime::Serialization::StreamingContext m_context; // 0x28
		::System::Runtime::Serialization::Formatters::FormatterAssemblyStyle m_assemblyFormat; // 0x38
		::System::Runtime::Serialization::Formatters::FormatterTypeStyle m_typeFormat; // 0x3C
		::System::Runtime::Serialization::Formatters::TypeFilterLevel m_securityLevel; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_BINARYFORMATTER__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::Runtime::Serialization::ISurrogateSelector* selector, ::System::Runtime::Serialization::StreamingContext context)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::ISurrogateSelector*, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_BINARYFORMATTER__CTOR_1_OFFSET))(this, selector, context);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_BINARYFORMATTER__CCTOR_OFFSET))();
		}

		::System::Object* Deserialize(::System::IO::Stream* serializationStream)
		{
			return ((::System::Object*(*)(::PVOID, ::System::IO::Stream*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_BINARYFORMATTER_DESERIALIZE_OFFSET))(this, serializationStream);
		}

		::System::Object* Deserialize_1(::System::IO::Stream* serializationStream, ::System::Runtime::Remoting::Messaging::HeaderHandler* handler, ::System::Boolean fCheck)
		{
			return ((::System::Object*(*)(::PVOID, ::System::IO::Stream*, ::System::Runtime::Remoting::Messaging::HeaderHandler*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_BINARYFORMATTER_DESERIALIZE_1_OFFSET))(this, serializationStream, handler, fCheck);
		}

		::System::Object* Deserialize_2(::System::IO::Stream* serializationStream, ::System::Runtime::Remoting::Messaging::HeaderHandler* handler)
		{
			return ((::System::Object*(*)(::PVOID, ::System::IO::Stream*, ::System::Runtime::Remoting::Messaging::HeaderHandler*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_BINARYFORMATTER_DESERIALIZE_2_OFFSET))(this, serializationStream, handler);
		}

		::System::Void Serialize(::System::IO::Stream* serializationStream, ::System::Object* graph)
		{
			return ((::System::Void(*)(::PVOID, ::System::IO::Stream*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_BINARYFORMATTER_SERIALIZE_OFFSET))(this, serializationStream, graph);
		}

		::System::Void Serialize_1(::System::IO::Stream* serializationStream, ::System::Object* graph, ::Il2CppArray<::System::Runtime::Remoting::Messaging::Header*>* headers)
		{
			return ((::System::Void(*)(::PVOID, ::System::IO::Stream*, ::System::Object*, ::Il2CppArray<::System::Runtime::Remoting::Messaging::Header*>*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_BINARYFORMATTER_SERIALIZE_1_OFFSET))(this, serializationStream, graph, headers);
		}

		::System::Void Serialize_2(::System::IO::Stream* serializationStream, ::System::Object* graph, ::Il2CppArray<::System::Runtime::Remoting::Messaging::Header*>* headers, ::System::Boolean fCheck)
		{
			return ((::System::Void(*)(::PVOID, ::System::IO::Stream*, ::System::Object*, ::Il2CppArray<::System::Runtime::Remoting::Messaging::Header*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_BINARYFORMATTER_SERIALIZE_2_OFFSET))(this, serializationStream, graph, headers, fCheck);
		}

		static ::System::Runtime::Serialization::Formatters::Binary::TypeInformation* GetTypeInformation(::System::Type* type)
		{
			return ((::System::Runtime::Serialization::Formatters::Binary::TypeInformation*(*)(::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_BINARYFORMATTER_GETTYPEINFORMATION_OFFSET))(type);
		}
	};
}
