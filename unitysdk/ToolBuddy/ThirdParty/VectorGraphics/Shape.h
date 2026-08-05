#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/ToolBuddy/ThirdParty/VectorGraphics/BezierContour.h"
#include "unitysdk/ToolBuddy/ThirdParty/VectorGraphics/Matrix2D.h"
#include "unitysdk/ToolBuddy/ThirdParty/VectorGraphics/PathProperties.h"

namespace ToolBuddy::ThirdParty::VectorGraphics { class IFill; }

#define TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_SHAPE_GET_CONTOURS_OFFSET UNITYSDK_OFFSET(0x1DAA1E20)
#define TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_SHAPE_GET_FILLTRANSFORM_OFFSET UNITYSDK_OFFSET(0x1DAA1E60)
#define TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_SHAPE_GET_FILL_OFFSET UNITYSDK_OFFSET(0x1DAA1E40)
#define TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_SHAPE_GET_ISCONVEX_OFFSET UNITYSDK_OFFSET(0x1DAA1EC0)
#define TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_SHAPE_GET_PATHPROPS_OFFSET UNITYSDK_OFFSET(0x1DAA1E90)
#define TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_SHAPE_SET_CONTOURS_OFFSET UNITYSDK_OFFSET(0x1DAA1E30)
#define TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_SHAPE_SET_FILLTRANSFORM_OFFSET UNITYSDK_OFFSET(0x1DAA1E80)
#define TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_SHAPE_SET_FILL_OFFSET UNITYSDK_OFFSET(0x1DAA1E50)
#define TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_SHAPE_SET_ISCONVEX_OFFSET UNITYSDK_OFFSET(0x1DAA1ED0)
#define TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_SHAPE_SET_PATHPROPS_OFFSET UNITYSDK_OFFSET(0x1DAA1EB0)
#define TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_SHAPE__CTOR_OFFSET UNITYSDK_OFFSET(0x1DA8BC60)

namespace ToolBuddy::ThirdParty::VectorGraphics
{
	inline static constexpr unsigned int Shape_TypeDefinitionIndex = 31792;

	class Shape : public ::System::Object
	{
	public:
		::ToolBuddy::ThirdParty::VectorGraphics::PathProperties _PathProps_k__BackingField; // 0x10
		::ToolBuddy::ThirdParty::VectorGraphics::IFill* _Fill_k__BackingField; // 0x28
		::Il2CppArray<::ToolBuddy::ThirdParty::VectorGraphics::BezierContour>* _Contours_k__BackingField; // 0x30
		::ToolBuddy::ThirdParty::VectorGraphics::Matrix2D m_FillTransform; // 0x38
		::System::Boolean _IsConvex_k__BackingField; // 0x50

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_SHAPE__CTOR_OFFSET))(this);
		}

		::Il2CppArray<::ToolBuddy::ThirdParty::VectorGraphics::BezierContour>* get_Contours()
		{
			return ((::Il2CppArray<::ToolBuddy::ThirdParty::VectorGraphics::BezierContour>*(*)(::PVOID))((::PBYTE)hIl2Cpp + TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_SHAPE_GET_CONTOURS_OFFSET))(this);
		}

		::System::Void set_Contours(::Il2CppArray<::ToolBuddy::ThirdParty::VectorGraphics::BezierContour>* value)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::ToolBuddy::ThirdParty::VectorGraphics::BezierContour>*))((::PBYTE)hIl2Cpp + TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_SHAPE_SET_CONTOURS_OFFSET))(this, value);
		}

		::ToolBuddy::ThirdParty::VectorGraphics::IFill* get_Fill()
		{
			return ((::ToolBuddy::ThirdParty::VectorGraphics::IFill*(*)(::PVOID))((::PBYTE)hIl2Cpp + TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_SHAPE_GET_FILL_OFFSET))(this);
		}

		::System::Void set_Fill(::ToolBuddy::ThirdParty::VectorGraphics::IFill* value)
		{
			return ((::System::Void(*)(::PVOID, ::ToolBuddy::ThirdParty::VectorGraphics::IFill*))((::PBYTE)hIl2Cpp + TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_SHAPE_SET_FILL_OFFSET))(this, value);
		}

		::ToolBuddy::ThirdParty::VectorGraphics::Matrix2D get_FillTransform()
		{
			return ((::ToolBuddy::ThirdParty::VectorGraphics::Matrix2D(*)(::PVOID))((::PBYTE)hIl2Cpp + TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_SHAPE_GET_FILLTRANSFORM_OFFSET))(this);
		}

		::System::Void set_FillTransform(::ToolBuddy::ThirdParty::VectorGraphics::Matrix2D value)
		{
			return ((::System::Void(*)(::PVOID, ::ToolBuddy::ThirdParty::VectorGraphics::Matrix2D))((::PBYTE)hIl2Cpp + TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_SHAPE_SET_FILLTRANSFORM_OFFSET))(this, value);
		}

		::ToolBuddy::ThirdParty::VectorGraphics::PathProperties get_PathProps()
		{
			return ((::ToolBuddy::ThirdParty::VectorGraphics::PathProperties(*)(::PVOID))((::PBYTE)hIl2Cpp + TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_SHAPE_GET_PATHPROPS_OFFSET))(this);
		}

		::System::Void set_PathProps(::ToolBuddy::ThirdParty::VectorGraphics::PathProperties value)
		{
			return ((::System::Void(*)(::PVOID, ::ToolBuddy::ThirdParty::VectorGraphics::PathProperties))((::PBYTE)hIl2Cpp + TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_SHAPE_SET_PATHPROPS_OFFSET))(this, value);
		}

		::System::Boolean get_IsConvex()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_SHAPE_GET_ISCONVEX_OFFSET))(this);
		}

		::System::Void set_IsConvex(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_SHAPE_SET_ISCONVEX_OFFSET))(this, value);
		}
	};
}
