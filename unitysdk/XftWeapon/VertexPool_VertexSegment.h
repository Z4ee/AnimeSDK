#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace XftWeapon { class VertexPool; }

#define XFTWEAPON_VERTEXPOOL_VERTEXSEGMENT_CLEARINDICES_OFFSET UNITYSDK_OFFSET(0x1B172DA0)
#define XFTWEAPON_VERTEXPOOL_VERTEXSEGMENT__CTOR_OFFSET UNITYSDK_OFFSET(0x1B171EA0)

namespace XftWeapon
{
	inline static constexpr unsigned int VertexPool_VertexSegment_TypeDefinitionIndex = 37677;

	class VertexPool_VertexSegment : public ::System::Object
	{
	public:
		::XftWeapon::VertexPool* Pool; // 0x10
		::System::Int32 IndexStart; // 0x18
		::System::Int32 IndexCount; // 0x1C
		::System::Int32 VertCount; // 0x20
		::System::Int32 VertStart; // 0x24

		::System::Void _ctor(::System::Int32 start, ::System::Int32 count, ::System::Int32 istart, ::System::Int32 icount, ::XftWeapon::VertexPool* pool)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::XftWeapon::VertexPool*))((::PBYTE)hIl2Cpp + XFTWEAPON_VERTEXPOOL_VERTEXSEGMENT__CTOR_OFFSET))(this, start, count, istart, icount, pool);
		}

		::System::Void ClearIndices()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + XFTWEAPON_VERTEXPOOL_VERTEXSEGMENT_CLEARINDICES_OFFSET))(this);
		}
	};
}
