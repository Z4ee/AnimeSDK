#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Transform; }
namespace miHoYoEmotion { class BoneShape; }

#define MIHOYOEMOTION_SHAPE_HASBONE_OFFSET UNITYSDK_OFFSET(0xB31FDE0)
#define MIHOYOEMOTION_SHAPE_INDEXOFBONE_OFFSET UNITYSDK_OFFSET(0xB31FEB0)
#define MIHOYOEMOTION_SHAPE__CTOR_OFFSET UNITYSDK_OFFSET(0xB31FAD0)

namespace miHoYoEmotion
{
	inline static constexpr unsigned int Shape_TypeDefinitionIndex = 44832;

	class Shape : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::Int32>* blendShapes; // 0x10
		::System::Collections::Generic::List_1<::System::String*>* blendableNames; // 0x18
		::System::Collections::Generic::List_1<::System::Single>* weights; // 0x20
		::System::Collections::Generic::List_1<::miHoYoEmotion::BoneShape*>* bones; // 0x28
		::System::Boolean verified; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYOEMOTION_SHAPE__CTOR_OFFSET))(this);
		}

		::System::Boolean HasBone(::UnityEngine::Transform* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + MIHOYOEMOTION_SHAPE_HASBONE_OFFSET))(this, a1);
		}

		::System::Int32 IndexOfBone(::UnityEngine::Transform* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + MIHOYOEMOTION_SHAPE_INDEXOFBONE_OFFSET))(this, a1);
		}
	};
}
