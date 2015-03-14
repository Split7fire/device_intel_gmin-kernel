/*
 * Support for Medifield PNW Camera Imaging ISP subsystem.
 *
 * Copyright (c) 2010 Intel Corporation. All Rights Reserved.
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License version
 * 2 as published by the Free Software Foundation.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA
 * 02110-1301, USA.
 *
 */
#ifndef ATOMISP_EXTRA_H_
#define ATOMISP_EXTRA_H_

/*move from atomisp.h*/
enum atomisp_camera_port {
	ATOMISP_CAMERA_PORT_SECONDARY,
	ATOMISP_CAMERA_PORT_PRIMARY,
	ATOMISP_CAMERA_PORT_TERTIARY,
	ATOMISP_CAMERA_NR_PORTS
};

#ifdef CSS15
/* Sensor resolution specific data for AE calculation.*/
struct atomisp_sensor_mode_data {
	unsigned int coarse_integration_time_min;
	unsigned int coarse_integration_time_max_margin;
	unsigned int fine_integration_time_min;
	unsigned int fine_integration_time_max_margin;
	unsigned int fine_integration_time_def;
	unsigned int frame_length_lines;
	unsigned int line_length_pck;
	unsigned int read_mode;
	unsigned int vt_pix_clk_freq_mhz;
	unsigned int crop_horizontal_start; /* Sensor crop start cord. (x0,y0)*/
	unsigned int crop_vertical_start;
	unsigned int crop_horizontal_end; /* Sensor crop end cord. (x1,y1)*/
	unsigned int crop_vertical_end;
	unsigned int output_width; /* input size to ISP after binning/scaling */
	unsigned int output_height;
	uint8_t binning_factor_x; /* horizontal binning factor used */
	uint8_t binning_factor_y; /* vertical binning factor used */
	uint8_t reserved[2];
};
#else
/* Sensor resolution specific data for AE calculation.*/
struct atomisp_sensor_mode_data {
	unsigned int coarse_integration_time_min;
	unsigned int coarse_integration_time_max_margin;
	unsigned int fine_integration_time_min;
	unsigned int fine_integration_time_max_margin;
	unsigned int fine_integration_time_def;
	unsigned int frame_length_lines;
	unsigned int line_length_pck;
	unsigned int read_mode;
	unsigned int vt_pix_clk_freq_mhz;
	unsigned int crop_horizontal_start; /* Sensor crop start cord. (x0,y0)*/
	unsigned int crop_vertical_start;
	unsigned int crop_horizontal_end; /* Sensor crop end cord. (x1,y1)*/
	unsigned int crop_vertical_end;
	unsigned int output_width; /* input size to ISP after binning/scaling */
	unsigned int output_height;
	uint8_t binning_factor_x; /* horizontal binning factor used */
	uint8_t binning_factor_y; /* vertical binning factor used */
	uint16_t hts;
};
#endif
#endif /* ATOMISP_EXTRA_H_ */
