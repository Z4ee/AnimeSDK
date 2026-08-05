#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define SYSTEM_DATA_SQLTYPES_SQLRESOURCE_INVALIDOPSTREAMCLOSED_OFFSET UNITYSDK_OFFSET(0x1EFD2540)
#define SYSTEM_DATA_SQLTYPES_SQLRESOURCE_INVALIDOPSTREAMNONREADABLE_OFFSET UNITYSDK_OFFSET(0x1EFD2620)
#define SYSTEM_DATA_SQLTYPES_SQLRESOURCE_INVALIDOPSTREAMNONSEEKABLE_OFFSET UNITYSDK_OFFSET(0x1EFD2690)
#define SYSTEM_DATA_SQLTYPES_SQLRESOURCE_INVALIDOPSTREAMNONWRITABLE_OFFSET UNITYSDK_OFFSET(0x1EFD25B0)

namespace System::Data::SqlTypes
{
	inline static constexpr unsigned int SQLResource_TypeDefinitionIndex = 39369;

	class SQLResource : public ::System::Object
	{
	public:
		static ::System::String* InvalidOpStreamClosed(::System::String* method)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLRESOURCE_INVALIDOPSTREAMCLOSED_OFFSET))(method);
		}

		static ::System::String* InvalidOpStreamNonWritable(::System::String* method)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLRESOURCE_INVALIDOPSTREAMNONWRITABLE_OFFSET))(method);
		}

		static ::System::String* InvalidOpStreamNonReadable(::System::String* method)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLRESOURCE_INVALIDOPSTREAMNONREADABLE_OFFSET))(method);
		}

		static ::System::String* InvalidOpStreamNonSeekable(::System::String* method)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLRESOURCE_INVALIDOPSTREAMNONSEEKABLE_OFFSET))(method);
		}
	};
}
