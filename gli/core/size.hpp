///////////////////////////////////////////////////////////////////////////////////////////////////
// OpenGL Image Copyright (c) 2008 - 2010 G-Truc Creation (www.g-truc.net)
///////////////////////////////////////////////////////////////////////////////////////////////////
// Created : 2010-09-08
// Updated : 2010-09-08
// Licence : This source is under MIT License
// File    : gli/core/size.hpp
///////////////////////////////////////////////////////////////////////////////////////////////////

#ifndef GLI_CORE_SIZE_INCLUDED
#define GLI_CORE_SIZE_INCLUDED

#include "image.hpp"

namespace gli
{
	enum size_type
	{
		LINEAR_SIZE,
		BLOCK_SIZE,
		BIT_PER_PIXEL, 
		COMPONENT
	};

	//template <size_type sizeType>
	image::size_type size(
		image const & Image, 
		size_type const & SizeType);

	//template <size_type sizeType>
	image::size_type size(
		mipmap const & Mipmap, 
		size_type const & SizeType);

}//namespace gli

#include "size.inl"

#endif//GLI_CORE_SIZE_INCLUDED
